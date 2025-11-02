module.exports = grammar({
  name: "mpx",

  externals: $ => [
    $._text_fragment,
    $._interpolation_text,
    $._start_tag_name,
    $._template_start_tag_name,
    $._script_start_tag_name,
    $._style_start_tag_name,
    $._end_tag_name,
    $.erroneous_end_tag_name,
    "/>",
    $._implicit_end_tag,
    $.raw_text,
    $.comment,
  ],

  extras: $ => [/\s+/],

  rules: {
    component: $ => repeat(
      choice(
        $.comment,
        $.element,
        $.template_element,
        $.script_element,
        $.style_element,
        $.json_config_element,
      ),
    ),

    _node: $ => choice(
      $.comment,
      $.text,
      $.interpolation,
      $.element,
      $.template_element,
      $.script_element,
      $.style_element,
      $.json_config_element,
      $.erroneous_end_tag,
    ),

    element: $ => choice(
      seq(
        $.start_tag,
        repeat($._node),
        choice($.end_tag, $._implicit_end_tag),
      ),
      $.self_closing_tag,
    ),

    template_element: $ => seq(
      alias($.template_start_tag, $.start_tag),
      repeat($._node),
      $.end_tag,
    ),

    // 脚本标签 - 普通脚本（排除 JSON 配置）
    script_element: $ => prec(1, seq(
      "<script",
      repeat(choice(
        $.lang_attribute,
        $.src_attribute,
        $.setup_attribute,
        $.other_attribute
      )),
      ">",
      alias(token(prec(-1, /[^<]*/)), $.raw_text),
      "</script>"
    )),

    // JSON 配置块 - 优先级更高
    json_config_element: $ => prec(2, choice(
      // 模式一：type="application/json" - 纯 JSON
      seq(
        "<script",
        repeat(choice(
          $.lang_attribute,
          $.src_attribute,
          $.setup_attribute,
          $.other_attribute
        )),
        $.json_type_attribute,
        repeat(choice(
          $.lang_attribute,
          $.src_attribute,
          $.setup_attribute,
          $.other_attribute
        )),
        ">",
        alias(token(prec(-1, /[^<]*/)), $.raw_text),
        "</script>"
      ),
      // 模式二：name="json" - CommonJS 模式
      seq(
        "<script",
        repeat(choice(
          $.lang_attribute,
          $.src_attribute,
          $.setup_attribute,
          $.other_attribute
        )),
        $.json_name_attribute,
        repeat(choice(
          $.lang_attribute,
          $.src_attribute,
          $.setup_attribute,
          $.other_attribute
        )),
        ">",
        alias(token(prec(-1, /[^<]*/)), $.raw_text),
        "</script>"
      )
    )),

    style_element: $ => seq(
      alias($.style_start_tag, $.start_tag),
      optional($.raw_text),
      $.end_tag,
    ),

    start_tag: $ => seq(
      "<",
      alias($._start_tag_name, $.tag_name),
      repeat(choice($.attribute, $.directive_attribute, $.wx_directive_attribute, $.event_binding, $.mode_attribute)),
      ">",
    ),

    template_start_tag: $ => seq(
      "<",
      alias($._template_start_tag_name, $.tag_name),
      repeat(choice($.attribute, $.directive_attribute, $.wx_directive_attribute, $.event_binding, $.mode_attribute)),
      ">",
    ),

    script_start_tag: $ => seq(
      "<",
      alias($._script_start_tag_name, $.tag_name),
      repeat(choice(
        $.lang_attribute,
        $.src_attribute,
        $.setup_attribute,
        $.other_attribute
      )),
      ">",
    ),

    style_start_tag: $ => seq(
      "<",
      alias($._style_start_tag_name, $.tag_name),
      repeat(choice(
        $.lang_attribute,
        $.src_attribute,
        $.setup_attribute,
        $.other_attribute
      )),
      ">",
    ),

    self_closing_tag: $ => seq(
      "<",
      alias($._start_tag_name, $.tag_name),
      repeat(choice($.attribute, $.directive_attribute, $.wx_directive_attribute, $.event_binding, $.mode_attribute)),
      "/>",
    ),

    end_tag: $ => seq(
      "</",
      alias($._end_tag_name, $.tag_name),
      ">",
    ),

    erroneous_end_tag: $ => seq(
      "</",
      $.erroneous_end_tag_name,
      ">",
    ),

    // 具体的属性定义
    lang_attribute: $ => seq("lang", "=", choice('"javascript"', '"typescript"', '"js"', '"ts"')),
    src_attribute: $ => seq("src", "=", $.quoted_attribute_value),
    setup_attribute: $ => seq("setup"),
    other_attribute: $ => seq($.attribute_name, "=", $.quoted_attribute_value),

    // JSON 配置属性
    json_type_attribute: $ => seq("type", "=", '"application/json"'),
    json_name_attribute: $ => seq("name", "=", '"json"'),

    // 通用属性定义
    attribute: $ => seq(
      $.attribute_name,
      optional(seq(
        "=",
        choice(
          $.attribute_value,
          $.quoted_attribute_value,
        ),
      )),
    ),

    attribute_name: $ => /[^<>"'=/\s]+/,

    attribute_value: $ => /[^<>"'=\s]+/,

    quoted_attribute_value: $ =>
      choice(
        seq("'", optional(alias(/[^']+/, $.attribute_value)), "'"),
        seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"'),
      ),

    text: $ => choice($._text_fragment, "{{"),

    interpolation: $ => seq(
      "{{",
      optional(alias($._interpolation_text, $.raw_text)),
      "}}",
    ),

    // Vue 风格的指令（MPX 也支持）
    directive_attribute: $ =>
      seq(
        choice(
          seq(
            $.directive_name,
            optional(seq(
              token.immediate(prec(1, ":")),
              choice($.directive_argument, $.directive_dynamic_argument),
            )),
          ),
          seq(
            alias($.directive_shorthand, $.directive_name),
            choice($.directive_argument, $.directive_dynamic_argument),
          ),
        ),
        optional($.directive_modifiers),
        optional(seq("=", choice($.attribute_value, $.quoted_attribute_value))),
      ),

    // 小程序原生指令
    wx_directive_attribute: $ => seq(
      choice(
        // 条件渲染
        "wx:if", "wx:elif", "wx:else",
        // 列表渲染
        "wx:for", "wx:key", "wx:for-index", "wx:for-item",
        // 显示控制
        "wx:model", "wx:show", "wx:hidden",
        // 其他指令
        "wx:for-track"
      ),
      optional(seq("=", choice($.attribute_value, $.quoted_attribute_value))),
    ),

    // 事件绑定
    event_binding: $ => seq(
      choice("bind", "catch", "capture-bind", "capture-catch"),
      token.immediate(":"),
      $.event_name,
      optional(seq("=", choice($.attribute_value, $.quoted_attribute_value))),
    ),

    // 跨平台模式属性
    mode_attribute: $ => seq(
      "mode",
      "=",
      choice('"weixin"', '"ali"', '"swan"', '"tt"', '"qq"', '"jd"'),
    ),

    directive_name: $ => token(prec(1, /v-[^<>'"=/\s:.]+/)),
    directive_shorthand: $ => token(prec(1, choice(":", "@", "#"))),
    directive_argument: $ => token.immediate(/[^<>"'/=\s.]+/),
    directive_dynamic_argument: $ => seq(
      token.immediate(prec(1, "[")),
      optional($.directive_dynamic_argument_value),
      token.immediate("]"),
    ),
    directive_dynamic_argument_value: $ => token.immediate(/[^<>"'/=\s\]]+/),
    directive_modifiers: $ => repeat1(seq(token.immediate(prec(1, ".")), $.directive_modifier)),
    directive_modifier: $ => token.immediate(/[^<>"'/=\s.]+/),
    event_name: $ => token.immediate(/[a-zA-Z][a-zA-Z0-9-]*/),
  },
});
