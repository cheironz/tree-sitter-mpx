#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 299
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LTscript = 1,
  anon_sym_GT = 2,
  aux_sym_script_element_token1 = 3,
  anon_sym_LT_SLASHscript_GT = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_lang = 8,
  anon_sym_EQ = 9,
  anon_sym_DQUOTEjavascript_DQUOTE = 10,
  anon_sym_DQUOTEtypescript_DQUOTE = 11,
  anon_sym_DQUOTEjs_DQUOTE = 12,
  anon_sym_DQUOTEts_DQUOTE = 13,
  anon_sym_src = 14,
  anon_sym_setup = 15,
  anon_sym_type = 16,
  anon_sym_DQUOTEapplication_SLASHjson_DQUOTE = 17,
  anon_sym_name = 18,
  anon_sym_DQUOTEjson_DQUOTE = 19,
  sym_attribute_name = 20,
  sym_attribute_value = 21,
  anon_sym_SQUOTE = 22,
  aux_sym_quoted_attribute_value_token1 = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_quoted_attribute_value_token2 = 25,
  anon_sym_LBRACE_LBRACE = 26,
  anon_sym_RBRACE_RBRACE = 27,
  anon_sym_COLON = 28,
  anon_sym_wx_COLONif = 29,
  anon_sym_wx_COLONelif = 30,
  anon_sym_wx_COLONelse = 31,
  anon_sym_wx_COLONfor = 32,
  anon_sym_wx_COLONkey = 33,
  anon_sym_wx_COLONfor_DASHindex = 34,
  anon_sym_wx_COLONfor_DASHitem = 35,
  anon_sym_wx_COLONmodel = 36,
  anon_sym_wx_COLONshow = 37,
  anon_sym_wx_COLONhidden = 38,
  anon_sym_wx_COLONfor_DASHtrack = 39,
  anon_sym_bind = 40,
  anon_sym_catch = 41,
  anon_sym_capture_DASHbind = 42,
  anon_sym_capture_DASHcatch = 43,
  anon_sym_COLON2 = 44,
  anon_sym_mode = 45,
  anon_sym_DQUOTEweixin_DQUOTE = 46,
  anon_sym_DQUOTEali_DQUOTE = 47,
  anon_sym_DQUOTEswan_DQUOTE = 48,
  anon_sym_DQUOTEtt_DQUOTE = 49,
  anon_sym_DQUOTEqq_DQUOTE = 50,
  anon_sym_DQUOTEjd_DQUOTE = 51,
  sym_directive_name = 52,
  sym_directive_shorthand = 53,
  aux_sym_directive_argument_token1 = 54,
  anon_sym_LBRACK = 55,
  anon_sym_RBRACK = 56,
  sym_directive_dynamic_argument_value = 57,
  anon_sym_DOT = 58,
  sym_event_name = 59,
  sym__text_fragment = 60,
  sym__interpolation_text = 61,
  sym__start_tag_name = 62,
  sym__template_start_tag_name = 63,
  sym__script_start_tag_name = 64,
  sym__style_start_tag_name = 65,
  sym__end_tag_name = 66,
  sym_erroneous_end_tag_name = 67,
  sym__implicit_end_tag = 68,
  sym_raw_text = 69,
  sym_comment = 70,
  sym_component = 71,
  sym__node = 72,
  sym_element = 73,
  sym_template_element = 74,
  sym_script_element = 75,
  sym_json_config_element = 76,
  sym_style_element = 77,
  sym_start_tag = 78,
  sym_template_start_tag = 79,
  sym_style_start_tag = 80,
  sym_self_closing_tag = 81,
  sym_end_tag = 82,
  sym_erroneous_end_tag = 83,
  sym_lang_attribute = 84,
  sym_src_attribute = 85,
  sym_setup_attribute = 86,
  sym_other_attribute = 87,
  sym_json_type_attribute = 88,
  sym_json_name_attribute = 89,
  sym_attribute = 90,
  sym_quoted_attribute_value = 91,
  sym_text = 92,
  sym_interpolation = 93,
  sym_directive_attribute = 94,
  sym_wx_directive_attribute = 95,
  sym_event_binding = 96,
  sym_mode_attribute = 97,
  sym_directive_argument = 98,
  sym_directive_dynamic_argument = 99,
  sym_directive_modifiers = 100,
  sym_directive_modifier = 101,
  aux_sym_component_repeat1 = 102,
  aux_sym_element_repeat1 = 103,
  aux_sym_script_element_repeat1 = 104,
  aux_sym_start_tag_repeat1 = 105,
  aux_sym_directive_modifiers_repeat1 = 106,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LTscript] = "<script",
  [anon_sym_GT] = ">",
  [aux_sym_script_element_token1] = "raw_text",
  [anon_sym_LT_SLASHscript_GT] = "</script>",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_lang] = "lang",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTEjavascript_DQUOTE] = "\"javascript\"",
  [anon_sym_DQUOTEtypescript_DQUOTE] = "\"typescript\"",
  [anon_sym_DQUOTEjs_DQUOTE] = "\"js\"",
  [anon_sym_DQUOTEts_DQUOTE] = "\"ts\"",
  [anon_sym_src] = "src",
  [anon_sym_setup] = "setup",
  [anon_sym_type] = "type",
  [anon_sym_DQUOTEapplication_SLASHjson_DQUOTE] = "\"application/json\"",
  [anon_sym_name] = "name",
  [anon_sym_DQUOTEjson_DQUOTE] = "\"json\"",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_COLON] = ":",
  [anon_sym_wx_COLONif] = "wx:if",
  [anon_sym_wx_COLONelif] = "wx:elif",
  [anon_sym_wx_COLONelse] = "wx:else",
  [anon_sym_wx_COLONfor] = "wx:for",
  [anon_sym_wx_COLONkey] = "wx:key",
  [anon_sym_wx_COLONfor_DASHindex] = "wx:for-index",
  [anon_sym_wx_COLONfor_DASHitem] = "wx:for-item",
  [anon_sym_wx_COLONmodel] = "wx:model",
  [anon_sym_wx_COLONshow] = "wx:show",
  [anon_sym_wx_COLONhidden] = "wx:hidden",
  [anon_sym_wx_COLONfor_DASHtrack] = "wx:for-track",
  [anon_sym_bind] = "bind",
  [anon_sym_catch] = "catch",
  [anon_sym_capture_DASHbind] = "capture-bind",
  [anon_sym_capture_DASHcatch] = "capture-catch",
  [anon_sym_COLON2] = ":",
  [anon_sym_mode] = "mode",
  [anon_sym_DQUOTEweixin_DQUOTE] = "\"weixin\"",
  [anon_sym_DQUOTEali_DQUOTE] = "\"ali\"",
  [anon_sym_DQUOTEswan_DQUOTE] = "\"swan\"",
  [anon_sym_DQUOTEtt_DQUOTE] = "\"tt\"",
  [anon_sym_DQUOTEqq_DQUOTE] = "\"qq\"",
  [anon_sym_DQUOTEjd_DQUOTE] = "\"jd\"",
  [sym_directive_name] = "directive_name",
  [sym_directive_shorthand] = "directive_name",
  [aux_sym_directive_argument_token1] = "directive_argument_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_directive_dynamic_argument_value] = "directive_dynamic_argument_value",
  [anon_sym_DOT] = ".",
  [sym_event_name] = "event_name",
  [sym__text_fragment] = "_text_fragment",
  [sym__interpolation_text] = "raw_text",
  [sym__start_tag_name] = "tag_name",
  [sym__template_start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_component] = "component",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_template_element] = "template_element",
  [sym_script_element] = "script_element",
  [sym_json_config_element] = "json_config_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_template_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_lang_attribute] = "lang_attribute",
  [sym_src_attribute] = "src_attribute",
  [sym_setup_attribute] = "setup_attribute",
  [sym_other_attribute] = "other_attribute",
  [sym_json_type_attribute] = "json_type_attribute",
  [sym_json_name_attribute] = "json_name_attribute",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_text] = "text",
  [sym_interpolation] = "interpolation",
  [sym_directive_attribute] = "directive_attribute",
  [sym_wx_directive_attribute] = "wx_directive_attribute",
  [sym_event_binding] = "event_binding",
  [sym_mode_attribute] = "mode_attribute",
  [sym_directive_argument] = "directive_argument",
  [sym_directive_dynamic_argument] = "directive_dynamic_argument",
  [sym_directive_modifiers] = "directive_modifiers",
  [sym_directive_modifier] = "directive_modifier",
  [aux_sym_component_repeat1] = "component_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_script_element_repeat1] = "script_element_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_directive_modifiers_repeat1] = "directive_modifiers_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LTscript] = anon_sym_LTscript,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_script_element_token1] = sym_raw_text,
  [anon_sym_LT_SLASHscript_GT] = anon_sym_LT_SLASHscript_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_lang] = anon_sym_lang,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTEjavascript_DQUOTE] = anon_sym_DQUOTEjavascript_DQUOTE,
  [anon_sym_DQUOTEtypescript_DQUOTE] = anon_sym_DQUOTEtypescript_DQUOTE,
  [anon_sym_DQUOTEjs_DQUOTE] = anon_sym_DQUOTEjs_DQUOTE,
  [anon_sym_DQUOTEts_DQUOTE] = anon_sym_DQUOTEts_DQUOTE,
  [anon_sym_src] = anon_sym_src,
  [anon_sym_setup] = anon_sym_setup,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_DQUOTEapplication_SLASHjson_DQUOTE] = anon_sym_DQUOTEapplication_SLASHjson_DQUOTE,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_DQUOTEjson_DQUOTE] = anon_sym_DQUOTEjson_DQUOTE,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_wx_COLONif] = anon_sym_wx_COLONif,
  [anon_sym_wx_COLONelif] = anon_sym_wx_COLONelif,
  [anon_sym_wx_COLONelse] = anon_sym_wx_COLONelse,
  [anon_sym_wx_COLONfor] = anon_sym_wx_COLONfor,
  [anon_sym_wx_COLONkey] = anon_sym_wx_COLONkey,
  [anon_sym_wx_COLONfor_DASHindex] = anon_sym_wx_COLONfor_DASHindex,
  [anon_sym_wx_COLONfor_DASHitem] = anon_sym_wx_COLONfor_DASHitem,
  [anon_sym_wx_COLONmodel] = anon_sym_wx_COLONmodel,
  [anon_sym_wx_COLONshow] = anon_sym_wx_COLONshow,
  [anon_sym_wx_COLONhidden] = anon_sym_wx_COLONhidden,
  [anon_sym_wx_COLONfor_DASHtrack] = anon_sym_wx_COLONfor_DASHtrack,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_capture_DASHbind] = anon_sym_capture_DASHbind,
  [anon_sym_capture_DASHcatch] = anon_sym_capture_DASHcatch,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_DQUOTEweixin_DQUOTE] = anon_sym_DQUOTEweixin_DQUOTE,
  [anon_sym_DQUOTEali_DQUOTE] = anon_sym_DQUOTEali_DQUOTE,
  [anon_sym_DQUOTEswan_DQUOTE] = anon_sym_DQUOTEswan_DQUOTE,
  [anon_sym_DQUOTEtt_DQUOTE] = anon_sym_DQUOTEtt_DQUOTE,
  [anon_sym_DQUOTEqq_DQUOTE] = anon_sym_DQUOTEqq_DQUOTE,
  [anon_sym_DQUOTEjd_DQUOTE] = anon_sym_DQUOTEjd_DQUOTE,
  [sym_directive_name] = sym_directive_name,
  [sym_directive_shorthand] = sym_directive_name,
  [aux_sym_directive_argument_token1] = aux_sym_directive_argument_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_directive_dynamic_argument_value] = sym_directive_dynamic_argument_value,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_event_name] = sym_event_name,
  [sym__text_fragment] = sym__text_fragment,
  [sym__interpolation_text] = sym_raw_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__template_start_tag_name] = sym__start_tag_name,
  [sym__script_start_tag_name] = sym__start_tag_name,
  [sym__style_start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_component] = sym_component,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_template_element] = sym_template_element,
  [sym_script_element] = sym_script_element,
  [sym_json_config_element] = sym_json_config_element,
  [sym_style_element] = sym_style_element,
  [sym_start_tag] = sym_start_tag,
  [sym_template_start_tag] = sym_start_tag,
  [sym_style_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_lang_attribute] = sym_lang_attribute,
  [sym_src_attribute] = sym_src_attribute,
  [sym_setup_attribute] = sym_setup_attribute,
  [sym_other_attribute] = sym_other_attribute,
  [sym_json_type_attribute] = sym_json_type_attribute,
  [sym_json_name_attribute] = sym_json_name_attribute,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_text] = sym_text,
  [sym_interpolation] = sym_interpolation,
  [sym_directive_attribute] = sym_directive_attribute,
  [sym_wx_directive_attribute] = sym_wx_directive_attribute,
  [sym_event_binding] = sym_event_binding,
  [sym_mode_attribute] = sym_mode_attribute,
  [sym_directive_argument] = sym_directive_argument,
  [sym_directive_dynamic_argument] = sym_directive_dynamic_argument,
  [sym_directive_modifiers] = sym_directive_modifiers,
  [sym_directive_modifier] = sym_directive_modifier,
  [aux_sym_component_repeat1] = aux_sym_component_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_script_element_repeat1] = aux_sym_script_element_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_directive_modifiers_repeat1] = aux_sym_directive_modifiers_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LTscript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_element_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_SLASHscript_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEjavascript_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEtypescript_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEjs_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEts_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_src] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEapplication_SLASHjson_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEjson_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wx_COLONif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wx_COLONelif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wx_COLONelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wx_COLONfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wx_COLONkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wx_COLONfor_DASHindex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wx_COLONfor_DASHitem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wx_COLONmodel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wx_COLONshow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wx_COLONhidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wx_COLONfor_DASHtrack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_capture_DASHbind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_capture_DASHcatch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEweixin_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEali_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEswan_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEtt_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEqq_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEjd_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_shorthand] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_directive_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_directive_dynamic_argument_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_event_name] = {
    .visible = true,
    .named = true,
  },
  [sym__text_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__interpolation_text] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__template_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_template_element] = {
    .visible = true,
    .named = true,
  },
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_json_config_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_template_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_lang_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_src_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_setup_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_other_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_json_type_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_json_name_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_wx_directive_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_event_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_mode_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_dynamic_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_modifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_component_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_directive_name_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < ':'
      ? (c < '.'
        ? c == '\''
        : c <= '/')
      : (c <= ':' || (c >= '<' && c <= '>')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(164);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == '[') ADVANCE(319);
      if (lookahead == ']') ADVANCE(320);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(267);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(315);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(314);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(181);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(313);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(311);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(191);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(312);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(310);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(178);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(179);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(188);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(133);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(266);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(266);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(172);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(169);
      END_STATE();
    case 27:
      if (lookahead == '[') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(318);
      END_STATE();
    case 28:
      if (lookahead == ']') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(321);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'j') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(123);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == 'w') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(182);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(303);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'k') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(112);
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(277);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(279);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 90:
      if (lookahead == 'j') ADVANCE(132);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(297);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 117:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 'q') ADVANCE(5);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 146:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 147:
      if (lookahead == 'w') ADVANCE(293);
      END_STATE();
    case 148:
      if (lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 149:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 150:
      if (lookahead == 'x') ADVANCE(287);
      END_STATE();
    case 151:
      if (lookahead == 'x') ADVANCE(89);
      END_STATE();
    case 152:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(285);
      END_STATE();
    case 154:
      if (lookahead == '{') ADVANCE(274);
      END_STATE();
    case 155:
      if (lookahead == '}') ADVANCE(275);
      END_STATE();
    case 156:
      if (lookahead == '#' ||
          lookahead == '@') ADVANCE(317);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(266);
      END_STATE();
    case 157:
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(317);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(266);
      END_STATE();
    case 158:
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(317);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(266);
      END_STATE();
    case 159:
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(317);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(266);
      END_STATE();
    case 160:
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(316);
      END_STATE();
    case 161:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(318);
      END_STATE();
    case 162:
      if (eof) ADVANCE(164);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '{') ADVANCE(154);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      END_STATE();
    case 163:
      if (eof) ADVANCE(164);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(317);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(230);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'v') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(266);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LTscript);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_script_element_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_script_element_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LT_SLASHscript_GT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_lang);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_lang);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DQUOTEjavascript_DQUOTE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DQUOTEtypescript_DQUOTE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DQUOTEjs_DQUOTE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DQUOTEts_DQUOTE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_src);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_src);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_setup);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_setup);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DQUOTEapplication_SLASHjson_DQUOTE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DQUOTEjson_DQUOTE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'b') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'h') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'k') ADVANCE(214);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'h') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'h') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'k') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(255);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'w') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'x') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'x') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'y') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'y') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(316);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_wx_COLONif);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_wx_COLONif);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_wx_COLONelif);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_wx_COLONelif);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_wx_COLONelse);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_wx_COLONelse);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_wx_COLONfor);
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_wx_COLONfor);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_wx_COLONkey);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_wx_COLONkey);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_wx_COLONfor_DASHindex);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_wx_COLONfor_DASHindex);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_wx_COLONfor_DASHitem);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_wx_COLONfor_DASHitem);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_wx_COLONmodel);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_wx_COLONmodel);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_wx_COLONshow);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_wx_COLONshow);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_wx_COLONhidden);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_wx_COLONhidden);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_wx_COLONfor_DASHtrack);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_wx_COLONfor_DASHtrack);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_capture_DASHbind);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_capture_DASHbind);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_capture_DASHcatch);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_capture_DASHcatch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_mode);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(266);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_DQUOTEweixin_DQUOTE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DQUOTEali_DQUOTE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DQUOTEswan_DQUOTE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_DQUOTEtt_DQUOTE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DQUOTEqq_DQUOTE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DQUOTEjd_DQUOTE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_directive_name);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_directive_shorthand);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_directive_argument_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_directive_dynamic_argument_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != ']') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_event_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 163, .external_lex_state = 2},
  [2] = {.lex_state = 163, .external_lex_state = 3},
  [3] = {.lex_state = 163, .external_lex_state = 3},
  [4] = {.lex_state = 163, .external_lex_state = 3},
  [5] = {.lex_state = 163, .external_lex_state = 3},
  [6] = {.lex_state = 163, .external_lex_state = 3},
  [7] = {.lex_state = 163, .external_lex_state = 3},
  [8] = {.lex_state = 163, .external_lex_state = 3},
  [9] = {.lex_state = 156, .external_lex_state = 3},
  [10] = {.lex_state = 163},
  [11] = {.lex_state = 163},
  [12] = {.lex_state = 163},
  [13] = {.lex_state = 157, .external_lex_state = 3},
  [14] = {.lex_state = 157, .external_lex_state = 3},
  [15] = {.lex_state = 156},
  [16] = {.lex_state = 157, .external_lex_state = 3},
  [17] = {.lex_state = 157, .external_lex_state = 3},
  [18] = {.lex_state = 157},
  [19] = {.lex_state = 157},
  [20] = {.lex_state = 157, .external_lex_state = 3},
  [21] = {.lex_state = 157, .external_lex_state = 3},
  [22] = {.lex_state = 157, .external_lex_state = 3},
  [23] = {.lex_state = 157},
  [24] = {.lex_state = 157, .external_lex_state = 3},
  [25] = {.lex_state = 157},
  [26] = {.lex_state = 157, .external_lex_state = 3},
  [27] = {.lex_state = 163, .external_lex_state = 3},
  [28] = {.lex_state = 21, .external_lex_state = 4},
  [29] = {.lex_state = 163, .external_lex_state = 3},
  [30] = {.lex_state = 157},
  [31] = {.lex_state = 157},
  [32] = {.lex_state = 21, .external_lex_state = 4},
  [33] = {.lex_state = 157},
  [34] = {.lex_state = 163, .external_lex_state = 3},
  [35] = {.lex_state = 157},
  [36] = {.lex_state = 21, .external_lex_state = 4},
  [37] = {.lex_state = 163, .external_lex_state = 3},
  [38] = {.lex_state = 21, .external_lex_state = 4},
  [39] = {.lex_state = 157},
  [40] = {.lex_state = 21, .external_lex_state = 4},
  [41] = {.lex_state = 163, .external_lex_state = 3},
  [42] = {.lex_state = 163, .external_lex_state = 3},
  [43] = {.lex_state = 21, .external_lex_state = 4},
  [44] = {.lex_state = 21, .external_lex_state = 5},
  [45] = {.lex_state = 163, .external_lex_state = 3},
  [46] = {.lex_state = 21, .external_lex_state = 5},
  [47] = {.lex_state = 163, .external_lex_state = 3},
  [48] = {.lex_state = 163, .external_lex_state = 3},
  [49] = {.lex_state = 163, .external_lex_state = 3},
  [50] = {.lex_state = 163},
  [51] = {.lex_state = 163},
  [52] = {.lex_state = 163},
  [53] = {.lex_state = 163},
  [54] = {.lex_state = 163, .external_lex_state = 3},
  [55] = {.lex_state = 163, .external_lex_state = 3},
  [56] = {.lex_state = 21, .external_lex_state = 5},
  [57] = {.lex_state = 21, .external_lex_state = 5},
  [58] = {.lex_state = 163},
  [59] = {.lex_state = 163, .external_lex_state = 3},
  [60] = {.lex_state = 21, .external_lex_state = 5},
  [61] = {.lex_state = 163, .external_lex_state = 3},
  [62] = {.lex_state = 21, .external_lex_state = 4},
  [63] = {.lex_state = 163, .external_lex_state = 3},
  [64] = {.lex_state = 163, .external_lex_state = 3},
  [65] = {.lex_state = 163},
  [66] = {.lex_state = 21, .external_lex_state = 5},
  [67] = {.lex_state = 163},
  [68] = {.lex_state = 21, .external_lex_state = 5},
  [69] = {.lex_state = 163},
  [70] = {.lex_state = 163},
  [71] = {.lex_state = 163},
  [72] = {.lex_state = 163},
  [73] = {.lex_state = 163},
  [74] = {.lex_state = 163},
  [75] = {.lex_state = 163},
  [76] = {.lex_state = 163},
  [77] = {.lex_state = 163},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 163, .external_lex_state = 2},
  [81] = {.lex_state = 163, .external_lex_state = 2},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 23},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 24},
  [95] = {.lex_state = 24},
  [96] = {.lex_state = 24},
  [97] = {.lex_state = 24},
  [98] = {.lex_state = 24},
  [99] = {.lex_state = 24},
  [100] = {.lex_state = 24},
  [101] = {.lex_state = 24},
  [102] = {.lex_state = 21, .external_lex_state = 6},
  [103] = {.lex_state = 21, .external_lex_state = 7},
  [104] = {.lex_state = 21, .external_lex_state = 4},
  [105] = {.lex_state = 23},
  [106] = {.lex_state = 21, .external_lex_state = 4},
  [107] = {.lex_state = 21, .external_lex_state = 4},
  [108] = {.lex_state = 21, .external_lex_state = 4},
  [109] = {.lex_state = 21, .external_lex_state = 4},
  [110] = {.lex_state = 21, .external_lex_state = 4},
  [111] = {.lex_state = 21, .external_lex_state = 4},
  [112] = {.lex_state = 21, .external_lex_state = 4},
  [113] = {.lex_state = 21, .external_lex_state = 4},
  [114] = {.lex_state = 21, .external_lex_state = 4},
  [115] = {.lex_state = 21, .external_lex_state = 4},
  [116] = {.lex_state = 21, .external_lex_state = 4},
  [117] = {.lex_state = 21, .external_lex_state = 4},
  [118] = {.lex_state = 21, .external_lex_state = 4},
  [119] = {.lex_state = 21, .external_lex_state = 4},
  [120] = {.lex_state = 21, .external_lex_state = 4},
  [121] = {.lex_state = 21, .external_lex_state = 4},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 23},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 21, .external_lex_state = 4},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 21, .external_lex_state = 4},
  [128] = {.lex_state = 21, .external_lex_state = 4},
  [129] = {.lex_state = 21, .external_lex_state = 4},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 21, .external_lex_state = 5},
  [132] = {.lex_state = 21, .external_lex_state = 5},
  [133] = {.lex_state = 21, .external_lex_state = 5},
  [134] = {.lex_state = 21, .external_lex_state = 5},
  [135] = {.lex_state = 21, .external_lex_state = 5},
  [136] = {.lex_state = 21, .external_lex_state = 5},
  [137] = {.lex_state = 21, .external_lex_state = 5},
  [138] = {.lex_state = 21, .external_lex_state = 5},
  [139] = {.lex_state = 21, .external_lex_state = 5},
  [140] = {.lex_state = 21, .external_lex_state = 5},
  [141] = {.lex_state = 21, .external_lex_state = 5},
  [142] = {.lex_state = 21, .external_lex_state = 5},
  [143] = {.lex_state = 21, .external_lex_state = 5},
  [144] = {.lex_state = 21, .external_lex_state = 5},
  [145] = {.lex_state = 21, .external_lex_state = 5},
  [146] = {.lex_state = 21, .external_lex_state = 5},
  [147] = {.lex_state = 21, .external_lex_state = 5},
  [148] = {.lex_state = 21, .external_lex_state = 5},
  [149] = {.lex_state = 163},
  [150] = {.lex_state = 21, .external_lex_state = 5},
  [151] = {.lex_state = 163},
  [152] = {.lex_state = 21, .external_lex_state = 5},
  [153] = {.lex_state = 21, .external_lex_state = 5},
  [154] = {.lex_state = 24},
  [155] = {.lex_state = 24},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 24},
  [159] = {.lex_state = 24},
  [160] = {.lex_state = 24},
  [161] = {.lex_state = 24},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 163, .external_lex_state = 2},
  [164] = {.lex_state = 27},
  [165] = {.lex_state = 163, .external_lex_state = 2},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 163, .external_lex_state = 2},
  [168] = {.lex_state = 163, .external_lex_state = 2},
  [169] = {.lex_state = 163, .external_lex_state = 2},
  [170] = {.lex_state = 163, .external_lex_state = 2},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 163, .external_lex_state = 2},
  [173] = {.lex_state = 163, .external_lex_state = 2},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 27},
  [177] = {.lex_state = 163, .external_lex_state = 2},
  [178] = {.lex_state = 163},
  [179] = {.lex_state = 27},
  [180] = {.lex_state = 163, .external_lex_state = 2},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 27},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 163, .external_lex_state = 2},
  [192] = {.lex_state = 163, .external_lex_state = 2},
  [193] = {.lex_state = 163, .external_lex_state = 2},
  [194] = {.lex_state = 163, .external_lex_state = 2},
  [195] = {.lex_state = 163, .external_lex_state = 2},
  [196] = {.lex_state = 163},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 163, .external_lex_state = 8},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0, .external_lex_state = 9},
  [203] = {.lex_state = 0, .external_lex_state = 9},
  [204] = {.lex_state = 0, .external_lex_state = 9},
  [205] = {.lex_state = 163, .external_lex_state = 8},
  [206] = {.lex_state = 163, .external_lex_state = 8},
  [207] = {.lex_state = 163, .external_lex_state = 8},
  [208] = {.lex_state = 163},
  [209] = {.lex_state = 15},
  [210] = {.lex_state = 163},
  [211] = {.lex_state = 161},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 28},
  [217] = {.lex_state = 0, .external_lex_state = 10},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 10},
  [220] = {.lex_state = 0, .external_lex_state = 10},
  [221] = {.lex_state = 0, .external_lex_state = 10},
  [222] = {.lex_state = 0, .external_lex_state = 10},
  [223] = {.lex_state = 163, .external_lex_state = 8},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 28},
  [226] = {.lex_state = 163},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 161},
  [229] = {.lex_state = 0, .external_lex_state = 10},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 156},
  [234] = {.lex_state = 167},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 156},
  [237] = {.lex_state = 156},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 156},
  [245] = {.lex_state = 0, .external_lex_state = 11},
  [246] = {.lex_state = 167},
  [247] = {.lex_state = 156},
  [248] = {.lex_state = 163},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 156},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 156},
  [253] = {.lex_state = 156},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 156},
  [257] = {.lex_state = 156},
  [258] = {.lex_state = 167},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 167},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0, .external_lex_state = 11},
  [269] = {.lex_state = 167},
  [270] = {.lex_state = 167},
  [271] = {.lex_state = 21},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 167},
  [274] = {.lex_state = 167},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 167},
  [277] = {.lex_state = 156},
  [278] = {.lex_state = 0, .external_lex_state = 11},
  [279] = {.lex_state = 167},
  [280] = {.lex_state = 167},
  [281] = {.lex_state = 167},
  [282] = {.lex_state = 167},
  [283] = {.lex_state = 156},
  [284] = {.lex_state = 156},
  [285] = {.lex_state = 163},
  [286] = {.lex_state = 167},
  [287] = {.lex_state = 21},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0, .external_lex_state = 12},
  [291] = {.lex_state = 156},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 21},
  [294] = {.lex_state = 21},
  [295] = {.lex_state = 156},
  [296] = {.lex_state = 0, .external_lex_state = 12},
  [297] = {.lex_state = 167},
  [298] = {.lex_state = 0},
};

enum {
  ts_external_token__text_fragment = 0,
  ts_external_token__interpolation_text = 1,
  ts_external_token__start_tag_name = 2,
  ts_external_token__template_start_tag_name = 3,
  ts_external_token__script_start_tag_name = 4,
  ts_external_token__style_start_tag_name = 5,
  ts_external_token__end_tag_name = 6,
  ts_external_token_erroneous_end_tag_name = 7,
  ts_external_token_SLASH_GT = 8,
  ts_external_token__implicit_end_tag = 9,
  ts_external_token_raw_text = 10,
  ts_external_token_comment = 11,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_fragment] = sym__text_fragment,
  [ts_external_token__interpolation_text] = sym__interpolation_text,
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__template_start_tag_name] = sym__template_start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token__interpolation_text] = true,
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__template_start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_SLASH_GT] = true,
  },
  [4] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token__interpolation_text] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token__interpolation_text] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_raw_text] = true,
  },
  [9] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__template_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
  },
  [10] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
  },
  [11] = {
    [ts_external_token__end_tag_name] = true,
  },
  [12] = {
    [ts_external_token_erroneous_end_tag_name] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LTscript] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHscript_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_lang] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_src] = ACTIONS(1),
    [anon_sym_setup] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_wx_COLONif] = ACTIONS(1),
    [anon_sym_wx_COLONelif] = ACTIONS(1),
    [anon_sym_wx_COLONelse] = ACTIONS(1),
    [anon_sym_wx_COLONfor] = ACTIONS(1),
    [anon_sym_wx_COLONkey] = ACTIONS(1),
    [anon_sym_wx_COLONfor_DASHindex] = ACTIONS(1),
    [anon_sym_wx_COLONfor_DASHitem] = ACTIONS(1),
    [anon_sym_wx_COLONmodel] = ACTIONS(1),
    [anon_sym_wx_COLONshow] = ACTIONS(1),
    [anon_sym_wx_COLONhidden] = ACTIONS(1),
    [anon_sym_wx_COLONfor_DASHtrack] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_capture_DASHbind] = ACTIONS(1),
    [anon_sym_capture_DASHcatch] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [sym_directive_name] = ACTIONS(1),
    [sym_directive_shorthand] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__text_fragment] = ACTIONS(1),
    [sym__interpolation_text] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__template_start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_component] = STATE(289),
    [sym_element] = STATE(80),
    [sym_template_element] = STATE(80),
    [sym_script_element] = STATE(80),
    [sym_json_config_element] = STATE(80),
    [sym_style_element] = STATE(80),
    [sym_start_tag] = STATE(28),
    [sym_template_start_tag] = STATE(56),
    [sym_style_start_tag] = STATE(205),
    [sym_self_closing_tag] = STATE(167),
    [aux_sym_component_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LTscript] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(13), 1,
      anon_sym_SLASH_GT,
    ACTIONS(15), 1,
      sym_attribute_name,
    ACTIONS(21), 1,
      anon_sym_mode,
    ACTIONS(23), 1,
      sym_directive_name,
    ACTIONS(25), 1,
      sym_directive_shorthand,
    ACTIONS(19), 4,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
    STATE(4), 6,
      sym_attribute,
      sym_directive_attribute,
      sym_wx_directive_attribute,
      sym_event_binding,
      sym_mode_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(17), 11,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
  [46] = 8,
    ACTIONS(29), 1,
      sym_attribute_name,
    ACTIONS(38), 1,
      anon_sym_mode,
    ACTIONS(41), 1,
      sym_directive_name,
    ACTIONS(44), 1,
      sym_directive_shorthand,
    ACTIONS(27), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    ACTIONS(35), 4,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
    STATE(3), 6,
      sym_attribute,
      sym_directive_attribute,
      sym_wx_directive_attribute,
      sym_event_binding,
      sym_mode_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(32), 11,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
  [90] = 9,
    ACTIONS(15), 1,
      sym_attribute_name,
    ACTIONS(21), 1,
      anon_sym_mode,
    ACTIONS(23), 1,
      sym_directive_name,
    ACTIONS(25), 1,
      sym_directive_shorthand,
    ACTIONS(47), 1,
      anon_sym_GT,
    ACTIONS(49), 1,
      anon_sym_SLASH_GT,
    ACTIONS(19), 4,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
    STATE(3), 6,
      sym_attribute,
      sym_directive_attribute,
      sym_wx_directive_attribute,
      sym_event_binding,
      sym_mode_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(17), 11,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
  [136] = 9,
    ACTIONS(15), 1,
      sym_attribute_name,
    ACTIONS(21), 1,
      anon_sym_mode,
    ACTIONS(23), 1,
      sym_directive_name,
    ACTIONS(25), 1,
      sym_directive_shorthand,
    ACTIONS(47), 1,
      anon_sym_GT,
    ACTIONS(51), 1,
      anon_sym_SLASH_GT,
    ACTIONS(19), 4,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
    STATE(3), 6,
      sym_attribute,
      sym_directive_attribute,
      sym_wx_directive_attribute,
      sym_event_binding,
      sym_mode_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(17), 11,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
  [182] = 9,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(15), 1,
      sym_attribute_name,
    ACTIONS(21), 1,
      anon_sym_mode,
    ACTIONS(23), 1,
      sym_directive_name,
    ACTIONS(25), 1,
      sym_directive_shorthand,
    ACTIONS(53), 1,
      anon_sym_SLASH_GT,
    ACTIONS(19), 4,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
    STATE(7), 6,
      sym_attribute,
      sym_directive_attribute,
      sym_wx_directive_attribute,
      sym_event_binding,
      sym_mode_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(17), 11,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
  [228] = 9,
    ACTIONS(15), 1,
      sym_attribute_name,
    ACTIONS(21), 1,
      anon_sym_mode,
    ACTIONS(23), 1,
      sym_directive_name,
    ACTIONS(25), 1,
      sym_directive_shorthand,
    ACTIONS(47), 1,
      anon_sym_GT,
    ACTIONS(55), 1,
      anon_sym_SLASH_GT,
    ACTIONS(19), 4,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
    STATE(3), 6,
      sym_attribute,
      sym_directive_attribute,
      sym_wx_directive_attribute,
      sym_event_binding,
      sym_mode_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(17), 11,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
  [274] = 9,
    ACTIONS(11), 1,
      anon_sym_GT,
    ACTIONS(15), 1,
      sym_attribute_name,
    ACTIONS(21), 1,
      anon_sym_mode,
    ACTIONS(23), 1,
      sym_directive_name,
    ACTIONS(25), 1,
      sym_directive_shorthand,
    ACTIONS(57), 1,
      anon_sym_SLASH_GT,
    ACTIONS(19), 4,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
    STATE(5), 6,
      sym_attribute,
      sym_directive_attribute,
      sym_wx_directive_attribute,
      sym_event_binding,
      sym_mode_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(17), 11,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
  [320] = 7,
    ACTIONS(61), 1,
      anon_sym_EQ,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_directive_modifiers_repeat1,
    STATE(41), 1,
      sym_directive_modifiers,
    ACTIONS(59), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
    ACTIONS(63), 18,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
      sym_directive_shorthand,
  [361] = 8,
    ACTIONS(69), 1,
      anon_sym_GT,
    ACTIONS(71), 1,
      sym_attribute_name,
    ACTIONS(77), 1,
      anon_sym_mode,
    ACTIONS(79), 1,
      sym_directive_name,
    ACTIONS(81), 1,
      sym_directive_shorthand,
    ACTIONS(75), 4,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
    STATE(12), 6,
      sym_attribute,
      sym_directive_attribute,
      sym_wx_directive_attribute,
      sym_event_binding,
      sym_mode_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(73), 11,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
  [404] = 8,
    ACTIONS(71), 1,
      sym_attribute_name,
    ACTIONS(77), 1,
      anon_sym_mode,
    ACTIONS(79), 1,
      sym_directive_name,
    ACTIONS(81), 1,
      sym_directive_shorthand,
    ACTIONS(83), 1,
      anon_sym_GT,
    ACTIONS(75), 4,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
    STATE(10), 6,
      sym_attribute,
      sym_directive_attribute,
      sym_wx_directive_attribute,
      sym_event_binding,
      sym_mode_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(73), 11,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
  [447] = 8,
    ACTIONS(27), 1,
      anon_sym_GT,
    ACTIONS(85), 1,
      sym_attribute_name,
    ACTIONS(94), 1,
      anon_sym_mode,
    ACTIONS(97), 1,
      sym_directive_name,
    ACTIONS(100), 1,
      sym_directive_shorthand,
    ACTIONS(91), 4,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
    STATE(12), 6,
      sym_attribute,
      sym_directive_attribute,
      sym_wx_directive_attribute,
      sym_event_binding,
      sym_mode_attribute,
      aux_sym_start_tag_repeat1,
    ACTIONS(88), 11,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
  [490] = 6,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_EQ,
    STATE(17), 1,
      aux_sym_directive_modifiers_repeat1,
    STATE(29), 1,
      sym_directive_modifiers,
    ACTIONS(103), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(107), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [528] = 6,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_EQ,
    STATE(17), 1,
      aux_sym_directive_modifiers_repeat1,
    STATE(27), 1,
      sym_directive_modifiers,
    ACTIONS(109), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(113), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [566] = 7,
    ACTIONS(115), 1,
      anon_sym_EQ,
    ACTIONS(117), 1,
      anon_sym_COLON,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_directive_modifiers_repeat1,
    STATE(58), 1,
      sym_directive_modifiers,
    ACTIONS(59), 2,
      anon_sym_GT,
      sym_directive_name,
    ACTIONS(63), 18,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
      sym_directive_shorthand,
  [606] = 4,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_directive_modifiers_repeat1,
    ACTIONS(121), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(123), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [639] = 4,
    ACTIONS(67), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym_directive_modifiers_repeat1,
    ACTIONS(128), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(130), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [672] = 6,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(132), 1,
      anon_sym_EQ,
    STATE(23), 1,
      aux_sym_directive_modifiers_repeat1,
    STATE(52), 1,
      sym_directive_modifiers,
    ACTIONS(103), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(107), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [709] = 6,
    ACTIONS(119), 1,
      anon_sym_DOT,
    ACTIONS(134), 1,
      anon_sym_EQ,
    STATE(23), 1,
      aux_sym_directive_modifiers_repeat1,
    STATE(50), 1,
      sym_directive_modifiers,
    ACTIONS(109), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(113), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [746] = 2,
    ACTIONS(136), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
      anon_sym_DOT,
    ACTIONS(138), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [774] = 2,
    ACTIONS(140), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
      anon_sym_DOT,
    ACTIONS(142), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [802] = 2,
    ACTIONS(121), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
      anon_sym_DOT,
    ACTIONS(123), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [830] = 4,
    ACTIONS(119), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_directive_modifiers_repeat1,
    ACTIONS(128), 4,
      anon_sym_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(130), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [862] = 2,
    ACTIONS(144), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
      anon_sym_DOT,
    ACTIONS(146), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [890] = 4,
    ACTIONS(148), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_directive_modifiers_repeat1,
    ACTIONS(121), 4,
      anon_sym_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(123), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [922] = 2,
    ACTIONS(151), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
      anon_sym_DOT,
    ACTIONS(153), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [950] = 3,
    ACTIONS(105), 1,
      anon_sym_EQ,
    ACTIONS(103), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(107), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [979] = 13,
    ACTIONS(155), 1,
      anon_sym_LTscript,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(159), 1,
      anon_sym_LT_SLASH,
    ACTIONS(161), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(163), 1,
      sym__text_fragment,
    ACTIONS(165), 1,
      sym__implicit_end_tag,
    ACTIONS(167), 1,
      sym_comment,
    STATE(36), 1,
      sym_start_tag,
    STATE(57), 1,
      sym_template_start_tag,
    STATE(107), 1,
      sym_self_closing_tag,
    STATE(193), 1,
      sym_end_tag,
    STATE(206), 1,
      sym_style_start_tag,
    STATE(32), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [1028] = 3,
    ACTIONS(171), 1,
      anon_sym_EQ,
    ACTIONS(169), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(173), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1057] = 2,
    ACTIONS(136), 5,
      anon_sym_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
      anon_sym_DOT,
    ACTIONS(138), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1084] = 2,
    ACTIONS(121), 5,
      anon_sym_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
      anon_sym_DOT,
    ACTIONS(123), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1111] = 13,
    ACTIONS(155), 1,
      anon_sym_LTscript,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(159), 1,
      anon_sym_LT_SLASH,
    ACTIONS(161), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(163), 1,
      sym__text_fragment,
    ACTIONS(175), 1,
      sym__implicit_end_tag,
    ACTIONS(177), 1,
      sym_comment,
    STATE(36), 1,
      sym_start_tag,
    STATE(57), 1,
      sym_template_start_tag,
    STATE(107), 1,
      sym_self_closing_tag,
    STATE(169), 1,
      sym_end_tag,
    STATE(206), 1,
      sym_style_start_tag,
    STATE(62), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [1160] = 2,
    ACTIONS(151), 5,
      anon_sym_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
      anon_sym_DOT,
    ACTIONS(153), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1187] = 3,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(179), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(183), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1216] = 2,
    ACTIONS(144), 5,
      anon_sym_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
      anon_sym_DOT,
    ACTIONS(146), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1243] = 13,
    ACTIONS(155), 1,
      anon_sym_LTscript,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(161), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(163), 1,
      sym__text_fragment,
    ACTIONS(185), 1,
      anon_sym_LT_SLASH,
    ACTIONS(187), 1,
      sym__implicit_end_tag,
    ACTIONS(189), 1,
      sym_comment,
    STATE(36), 1,
      sym_start_tag,
    STATE(57), 1,
      sym_template_start_tag,
    STATE(107), 1,
      sym_self_closing_tag,
    STATE(108), 1,
      sym_end_tag,
    STATE(206), 1,
      sym_style_start_tag,
    STATE(38), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [1292] = 3,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(191), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(195), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1321] = 13,
    ACTIONS(155), 1,
      anon_sym_LTscript,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(161), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(163), 1,
      sym__text_fragment,
    ACTIONS(177), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LT_SLASH,
    ACTIONS(197), 1,
      sym__implicit_end_tag,
    STATE(36), 1,
      sym_start_tag,
    STATE(57), 1,
      sym_template_start_tag,
    STATE(107), 1,
      sym_self_closing_tag,
    STATE(112), 1,
      sym_end_tag,
    STATE(206), 1,
      sym_style_start_tag,
    STATE(62), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [1370] = 2,
    ACTIONS(140), 5,
      anon_sym_GT,
      anon_sym_EQ,
      sym_directive_name,
      sym_directive_shorthand,
      anon_sym_DOT,
    ACTIONS(142), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1397] = 13,
    ACTIONS(155), 1,
      anon_sym_LTscript,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(161), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(163), 1,
      sym__text_fragment,
    ACTIONS(199), 1,
      anon_sym_LT_SLASH,
    ACTIONS(201), 1,
      sym__implicit_end_tag,
    ACTIONS(203), 1,
      sym_comment,
    STATE(36), 1,
      sym_start_tag,
    STATE(57), 1,
      sym_template_start_tag,
    STATE(107), 1,
      sym_self_closing_tag,
    STATE(132), 1,
      sym_end_tag,
    STATE(206), 1,
      sym_style_start_tag,
    STATE(43), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [1446] = 3,
    ACTIONS(111), 1,
      anon_sym_EQ,
    ACTIONS(109), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(113), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1475] = 3,
    ACTIONS(207), 1,
      anon_sym_EQ,
    ACTIONS(205), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(209), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1504] = 13,
    ACTIONS(155), 1,
      anon_sym_LTscript,
    ACTIONS(157), 1,
      anon_sym_LT,
    ACTIONS(161), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(163), 1,
      sym__text_fragment,
    ACTIONS(177), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LT_SLASH,
    ACTIONS(211), 1,
      sym__implicit_end_tag,
    STATE(36), 1,
      sym_start_tag,
    STATE(57), 1,
      sym_template_start_tag,
    STATE(107), 1,
      sym_self_closing_tag,
    STATE(139), 1,
      sym_end_tag,
    STATE(206), 1,
      sym_style_start_tag,
    STATE(62), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [1553] = 12,
    ACTIONS(213), 1,
      anon_sym_LTscript,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(217), 1,
      anon_sym_LT_SLASH,
    ACTIONS(219), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 1,
      sym__text_fragment,
    ACTIONS(223), 1,
      sym_comment,
    STATE(40), 1,
      sym_start_tag,
    STATE(44), 1,
      sym_template_start_tag,
    STATE(133), 1,
      sym_self_closing_tag,
    STATE(136), 1,
      sym_end_tag,
    STATE(200), 1,
      sym_style_start_tag,
    STATE(66), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [1599] = 2,
    ACTIONS(169), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(173), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1625] = 12,
    ACTIONS(213), 1,
      anon_sym_LTscript,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(219), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 1,
      sym__text_fragment,
    ACTIONS(225), 1,
      anon_sym_LT_SLASH,
    ACTIONS(227), 1,
      sym_comment,
    STATE(40), 1,
      sym_start_tag,
    STATE(44), 1,
      sym_template_start_tag,
    STATE(133), 1,
      sym_self_closing_tag,
    STATE(170), 1,
      sym_end_tag,
    STATE(200), 1,
      sym_style_start_tag,
    STATE(68), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [1671] = 2,
    ACTIONS(229), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(231), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1697] = 2,
    ACTIONS(233), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(235), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1723] = 2,
    ACTIONS(237), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(239), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1749] = 3,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(103), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(107), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1777] = 3,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(179), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(183), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1805] = 3,
    ACTIONS(243), 1,
      anon_sym_EQ,
    ACTIONS(169), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(173), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1833] = 3,
    ACTIONS(245), 1,
      anon_sym_EQ,
    ACTIONS(191), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(195), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1861] = 2,
    ACTIONS(247), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(249), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1887] = 2,
    ACTIONS(251), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(253), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [1913] = 12,
    ACTIONS(213), 1,
      anon_sym_LTscript,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(219), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 1,
      sym__text_fragment,
    ACTIONS(225), 1,
      anon_sym_LT_SLASH,
    ACTIONS(255), 1,
      sym_comment,
    STATE(40), 1,
      sym_start_tag,
    STATE(44), 1,
      sym_template_start_tag,
    STATE(133), 1,
      sym_self_closing_tag,
    STATE(177), 1,
      sym_end_tag,
    STATE(200), 1,
      sym_style_start_tag,
    STATE(46), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [1959] = 12,
    ACTIONS(213), 1,
      anon_sym_LTscript,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(219), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 1,
      sym__text_fragment,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    ACTIONS(259), 1,
      sym_comment,
    STATE(40), 1,
      sym_start_tag,
    STATE(44), 1,
      sym_template_start_tag,
    STATE(109), 1,
      sym_end_tag,
    STATE(133), 1,
      sym_self_closing_tag,
    STATE(200), 1,
      sym_style_start_tag,
    STATE(60), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [2005] = 3,
    ACTIONS(134), 1,
      anon_sym_EQ,
    ACTIONS(109), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(113), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2033] = 2,
    ACTIONS(261), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(263), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2059] = 12,
    ACTIONS(213), 1,
      anon_sym_LTscript,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(219), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 1,
      sym__text_fragment,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LT_SLASH,
    STATE(40), 1,
      sym_start_tag,
    STATE(44), 1,
      sym_template_start_tag,
    STATE(113), 1,
      sym_end_tag,
    STATE(133), 1,
      sym_self_closing_tag,
    STATE(200), 1,
      sym_style_start_tag,
    STATE(68), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [2105] = 2,
    ACTIONS(265), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(267), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2131] = 12,
    ACTIONS(269), 1,
      anon_sym_LTscript,
    ACTIONS(272), 1,
      anon_sym_LT,
    ACTIONS(275), 1,
      anon_sym_LT_SLASH,
    ACTIONS(278), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(281), 1,
      sym__text_fragment,
    ACTIONS(284), 1,
      sym__implicit_end_tag,
    ACTIONS(286), 1,
      sym_comment,
    STATE(36), 1,
      sym_start_tag,
    STATE(57), 1,
      sym_template_start_tag,
    STATE(107), 1,
      sym_self_closing_tag,
    STATE(206), 1,
      sym_style_start_tag,
    STATE(62), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [2177] = 2,
    ACTIONS(289), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(291), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2203] = 2,
    ACTIONS(103), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(107), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2229] = 3,
    ACTIONS(293), 1,
      anon_sym_EQ,
    ACTIONS(205), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(209), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2257] = 12,
    ACTIONS(213), 1,
      anon_sym_LTscript,
    ACTIONS(215), 1,
      anon_sym_LT,
    ACTIONS(217), 1,
      anon_sym_LT_SLASH,
    ACTIONS(219), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 1,
      sym__text_fragment,
    ACTIONS(227), 1,
      sym_comment,
    STATE(40), 1,
      sym_start_tag,
    STATE(44), 1,
      sym_template_start_tag,
    STATE(133), 1,
      sym_self_closing_tag,
    STATE(140), 1,
      sym_end_tag,
    STATE(200), 1,
      sym_style_start_tag,
    STATE(68), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [2303] = 2,
    ACTIONS(265), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(267), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2328] = 11,
    ACTIONS(295), 1,
      anon_sym_LTscript,
    ACTIONS(298), 1,
      anon_sym_LT,
    ACTIONS(301), 1,
      anon_sym_LT_SLASH,
    ACTIONS(304), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(307), 1,
      sym__text_fragment,
    ACTIONS(310), 1,
      sym_comment,
    STATE(40), 1,
      sym_start_tag,
    STATE(44), 1,
      sym_template_start_tag,
    STATE(133), 1,
      sym_self_closing_tag,
    STATE(200), 1,
      sym_style_start_tag,
    STATE(68), 10,
      sym__node,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      sym_erroneous_end_tag,
      sym_text,
      sym_interpolation,
      aux_sym_element_repeat1,
  [2371] = 2,
    ACTIONS(169), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(173), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2396] = 2,
    ACTIONS(229), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(231), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2421] = 2,
    ACTIONS(233), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(235), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2446] = 2,
    ACTIONS(237), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(239), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2471] = 2,
    ACTIONS(247), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(249), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2496] = 2,
    ACTIONS(251), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(253), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2521] = 2,
    ACTIONS(261), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(263), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2546] = 2,
    ACTIONS(289), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(291), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2571] = 2,
    ACTIONS(103), 3,
      anon_sym_GT,
      sym_directive_name,
      sym_directive_shorthand,
    ACTIONS(107), 17,
      sym_attribute_name,
      anon_sym_wx_COLONif,
      anon_sym_wx_COLONelif,
      anon_sym_wx_COLONelse,
      anon_sym_wx_COLONfor,
      anon_sym_wx_COLONkey,
      anon_sym_wx_COLONfor_DASHindex,
      anon_sym_wx_COLONfor_DASHitem,
      anon_sym_wx_COLONmodel,
      anon_sym_wx_COLONshow,
      anon_sym_wx_COLONhidden,
      anon_sym_wx_COLONfor_DASHtrack,
      anon_sym_bind,
      anon_sym_catch,
      anon_sym_capture_DASHbind,
      anon_sym_capture_DASHcatch,
      anon_sym_mode,
  [2596] = 9,
    ACTIONS(313), 1,
      anon_sym_GT,
    ACTIONS(315), 1,
      anon_sym_lang,
    ACTIONS(317), 1,
      anon_sym_src,
    ACTIONS(319), 1,
      anon_sym_setup,
    ACTIONS(321), 1,
      anon_sym_type,
    ACTIONS(323), 1,
      anon_sym_name,
    ACTIONS(325), 1,
      sym_attribute_name,
    STATE(88), 2,
      sym_json_type_attribute,
      sym_json_name_attribute,
    STATE(79), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [2629] = 9,
    ACTIONS(315), 1,
      anon_sym_lang,
    ACTIONS(317), 1,
      anon_sym_src,
    ACTIONS(319), 1,
      anon_sym_setup,
    ACTIONS(321), 1,
      anon_sym_type,
    ACTIONS(323), 1,
      anon_sym_name,
    ACTIONS(325), 1,
      sym_attribute_name,
    ACTIONS(327), 1,
      anon_sym_GT,
    STATE(93), 2,
      sym_json_type_attribute,
      sym_json_name_attribute,
    STATE(86), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [2662] = 9,
    ACTIONS(5), 1,
      anon_sym_LTscript,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 1,
      sym_comment,
    STATE(28), 1,
      sym_start_tag,
    STATE(56), 1,
      sym_template_start_tag,
    STATE(167), 1,
      sym_self_closing_tag,
    STATE(205), 1,
      sym_style_start_tag,
    STATE(81), 6,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      aux_sym_component_repeat1,
  [2695] = 9,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      anon_sym_LTscript,
    ACTIONS(338), 1,
      anon_sym_LT,
    ACTIONS(341), 1,
      sym_comment,
    STATE(28), 1,
      sym_start_tag,
    STATE(56), 1,
      sym_template_start_tag,
    STATE(167), 1,
      sym_self_closing_tag,
    STATE(205), 1,
      sym_style_start_tag,
    STATE(81), 6,
      sym_element,
      sym_template_element,
      sym_script_element,
      sym_json_config_element,
      sym_style_element,
      aux_sym_component_repeat1,
  [2728] = 9,
    ACTIONS(315), 1,
      anon_sym_lang,
    ACTIONS(317), 1,
      anon_sym_src,
    ACTIONS(319), 1,
      anon_sym_setup,
    ACTIONS(321), 1,
      anon_sym_type,
    ACTIONS(323), 1,
      anon_sym_name,
    ACTIONS(325), 1,
      sym_attribute_name,
    ACTIONS(344), 1,
      anon_sym_GT,
    STATE(98), 2,
      sym_json_type_attribute,
      sym_json_name_attribute,
    STATE(83), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [2761] = 9,
    ACTIONS(315), 1,
      anon_sym_lang,
    ACTIONS(317), 1,
      anon_sym_src,
    ACTIONS(319), 1,
      anon_sym_setup,
    ACTIONS(321), 1,
      anon_sym_type,
    ACTIONS(323), 1,
      anon_sym_name,
    ACTIONS(325), 1,
      sym_attribute_name,
    ACTIONS(346), 1,
      anon_sym_GT,
    STATE(94), 2,
      sym_json_type_attribute,
      sym_json_name_attribute,
    STATE(86), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [2794] = 9,
    ACTIONS(315), 1,
      anon_sym_lang,
    ACTIONS(317), 1,
      anon_sym_src,
    ACTIONS(319), 1,
      anon_sym_setup,
    ACTIONS(321), 1,
      anon_sym_type,
    ACTIONS(323), 1,
      anon_sym_name,
    ACTIONS(325), 1,
      sym_attribute_name,
    ACTIONS(348), 1,
      anon_sym_GT,
    STATE(100), 2,
      sym_json_type_attribute,
      sym_json_name_attribute,
    STATE(86), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [2827] = 9,
    ACTIONS(315), 1,
      anon_sym_lang,
    ACTIONS(317), 1,
      anon_sym_src,
    ACTIONS(319), 1,
      anon_sym_setup,
    ACTIONS(321), 1,
      anon_sym_type,
    ACTIONS(323), 1,
      anon_sym_name,
    ACTIONS(325), 1,
      sym_attribute_name,
    ACTIONS(350), 1,
      anon_sym_GT,
    STATE(97), 2,
      sym_json_type_attribute,
      sym_json_name_attribute,
    STATE(84), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [2860] = 7,
    ACTIONS(352), 1,
      anon_sym_GT,
    ACTIONS(354), 1,
      anon_sym_lang,
    ACTIONS(357), 1,
      anon_sym_src,
    ACTIONS(360), 1,
      anon_sym_setup,
    ACTIONS(365), 1,
      sym_attribute_name,
    ACTIONS(363), 2,
      anon_sym_type,
      anon_sym_name,
    STATE(86), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [2887] = 6,
    ACTIONS(368), 1,
      anon_sym_GT,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    STATE(91), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [2910] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(378), 1,
      anon_sym_GT,
    STATE(92), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [2933] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(380), 1,
      anon_sym_GT,
    STATE(87), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [2956] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(382), 1,
      anon_sym_GT,
    STATE(91), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [2979] = 6,
    ACTIONS(352), 1,
      anon_sym_GT,
    ACTIONS(384), 1,
      anon_sym_lang,
    ACTIONS(387), 1,
      anon_sym_src,
    ACTIONS(390), 1,
      anon_sym_setup,
    ACTIONS(393), 1,
      sym_attribute_name,
    STATE(91), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [3002] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(396), 1,
      anon_sym_GT,
    STATE(91), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [3025] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(396), 1,
      anon_sym_GT,
    STATE(90), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [3048] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(398), 1,
      anon_sym_GT,
    STATE(95), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [3071] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(400), 1,
      anon_sym_GT,
    STATE(91), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [3094] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(398), 1,
      anon_sym_GT,
    STATE(91), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [3117] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(402), 1,
      anon_sym_GT,
    STATE(99), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [3140] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(404), 1,
      anon_sym_GT,
    STATE(96), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [3163] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(406), 1,
      anon_sym_GT,
    STATE(91), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [3186] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(406), 1,
      anon_sym_GT,
    STATE(101), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [3209] = 6,
    ACTIONS(370), 1,
      anon_sym_lang,
    ACTIONS(372), 1,
      anon_sym_src,
    ACTIONS(374), 1,
      anon_sym_setup,
    ACTIONS(376), 1,
      sym_attribute_name,
    ACTIONS(408), 1,
      anon_sym_GT,
    STATE(91), 5,
      sym_lang_attribute,
      sym_src_attribute,
      sym_setup_attribute,
      sym_other_attribute,
      aux_sym_script_element_repeat1,
  [3232] = 4,
    ACTIONS(412), 1,
      anon_sym_LT,
    ACTIONS(414), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(416), 1,
      sym__interpolation_text,
    ACTIONS(410), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3250] = 4,
    ACTIONS(412), 1,
      anon_sym_LT,
    ACTIONS(418), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(420), 1,
      sym__interpolation_text,
    ACTIONS(410), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3267] = 2,
    ACTIONS(424), 1,
      anon_sym_LT,
    ACTIONS(422), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3279] = 2,
    ACTIONS(251), 1,
      anon_sym_GT,
    ACTIONS(253), 6,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      anon_sym_type,
      anon_sym_name,
      sym_attribute_name,
  [3291] = 2,
    ACTIONS(428), 1,
      anon_sym_LT,
    ACTIONS(426), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3303] = 2,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(430), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3315] = 2,
    ACTIONS(436), 1,
      anon_sym_LT,
    ACTIONS(434), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3327] = 2,
    ACTIONS(440), 1,
      anon_sym_LT,
    ACTIONS(438), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3339] = 2,
    ACTIONS(444), 1,
      anon_sym_LT,
    ACTIONS(442), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3351] = 2,
    ACTIONS(448), 1,
      anon_sym_LT,
    ACTIONS(446), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3363] = 2,
    ACTIONS(452), 1,
      anon_sym_LT,
    ACTIONS(450), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3375] = 2,
    ACTIONS(456), 1,
      anon_sym_LT,
    ACTIONS(454), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3387] = 2,
    ACTIONS(460), 1,
      anon_sym_LT,
    ACTIONS(458), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3399] = 2,
    ACTIONS(464), 1,
      anon_sym_LT,
    ACTIONS(462), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3411] = 2,
    ACTIONS(412), 1,
      anon_sym_LT,
    ACTIONS(410), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3423] = 2,
    ACTIONS(468), 1,
      anon_sym_LT,
    ACTIONS(466), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3435] = 2,
    ACTIONS(472), 1,
      anon_sym_LT,
    ACTIONS(470), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3447] = 2,
    ACTIONS(476), 1,
      anon_sym_LT,
    ACTIONS(474), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3459] = 2,
    ACTIONS(480), 1,
      anon_sym_LT,
    ACTIONS(478), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3471] = 2,
    ACTIONS(484), 1,
      anon_sym_LT,
    ACTIONS(482), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3483] = 2,
    ACTIONS(486), 1,
      anon_sym_GT,
    ACTIONS(488), 6,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      anon_sym_type,
      anon_sym_name,
      sym_attribute_name,
  [3495] = 2,
    ACTIONS(490), 1,
      anon_sym_GT,
    ACTIONS(492), 6,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      anon_sym_type,
      anon_sym_name,
      sym_attribute_name,
  [3507] = 2,
    ACTIONS(494), 1,
      anon_sym_GT,
    ACTIONS(496), 6,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      anon_sym_type,
      anon_sym_name,
      sym_attribute_name,
  [3519] = 2,
    ACTIONS(500), 1,
      anon_sym_LT,
    ACTIONS(498), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3531] = 2,
    ACTIONS(502), 1,
      anon_sym_GT,
    ACTIONS(504), 6,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      anon_sym_type,
      anon_sym_name,
      sym_attribute_name,
  [3543] = 2,
    ACTIONS(508), 1,
      anon_sym_LT,
    ACTIONS(506), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3555] = 2,
    ACTIONS(512), 1,
      anon_sym_LT,
    ACTIONS(510), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3567] = 2,
    ACTIONS(516), 1,
      anon_sym_LT,
    ACTIONS(514), 6,
      sym__text_fragment,
      sym__implicit_end_tag,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3579] = 2,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 6,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      anon_sym_type,
      anon_sym_name,
      sym_attribute_name,
  [3591] = 2,
    ACTIONS(444), 1,
      anon_sym_LT,
    ACTIONS(442), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3602] = 2,
    ACTIONS(436), 1,
      anon_sym_LT,
    ACTIONS(434), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3613] = 2,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(430), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3624] = 2,
    ACTIONS(520), 1,
      anon_sym_LT,
    ACTIONS(518), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3635] = 2,
    ACTIONS(484), 1,
      anon_sym_LT,
    ACTIONS(482), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3646] = 2,
    ACTIONS(440), 1,
      anon_sym_LT,
    ACTIONS(438), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3657] = 2,
    ACTIONS(412), 1,
      anon_sym_LT,
    ACTIONS(410), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3668] = 2,
    ACTIONS(448), 1,
      anon_sym_LT,
    ACTIONS(446), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3679] = 2,
    ACTIONS(452), 1,
      anon_sym_LT,
    ACTIONS(450), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3690] = 2,
    ACTIONS(456), 1,
      anon_sym_LT,
    ACTIONS(454), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3701] = 2,
    ACTIONS(460), 1,
      anon_sym_LT,
    ACTIONS(458), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3712] = 2,
    ACTIONS(464), 1,
      anon_sym_LT,
    ACTIONS(462), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3723] = 2,
    ACTIONS(468), 1,
      anon_sym_LT,
    ACTIONS(466), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3734] = 2,
    ACTIONS(472), 1,
      anon_sym_LT,
    ACTIONS(470), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3745] = 2,
    ACTIONS(476), 1,
      anon_sym_LT,
    ACTIONS(474), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3756] = 2,
    ACTIONS(480), 1,
      anon_sym_LT,
    ACTIONS(478), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3767] = 2,
    ACTIONS(424), 1,
      anon_sym_LT,
    ACTIONS(422), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3778] = 2,
    ACTIONS(500), 1,
      anon_sym_LT,
    ACTIONS(498), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3789] = 1,
    ACTIONS(522), 6,
      anon_sym_DQUOTEweixin_DQUOTE,
      anon_sym_DQUOTEali_DQUOTE,
      anon_sym_DQUOTEswan_DQUOTE,
      anon_sym_DQUOTEtt_DQUOTE,
      anon_sym_DQUOTEqq_DQUOTE,
      anon_sym_DQUOTEjd_DQUOTE,
  [3798] = 2,
    ACTIONS(512), 1,
      anon_sym_LT,
    ACTIONS(510), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3809] = 1,
    ACTIONS(524), 6,
      anon_sym_DQUOTEweixin_DQUOTE,
      anon_sym_DQUOTEali_DQUOTE,
      anon_sym_DQUOTEswan_DQUOTE,
      anon_sym_DQUOTEtt_DQUOTE,
      anon_sym_DQUOTEqq_DQUOTE,
      anon_sym_DQUOTEjd_DQUOTE,
  [3818] = 2,
    ACTIONS(516), 1,
      anon_sym_LT,
    ACTIONS(514), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3829] = 2,
    ACTIONS(528), 1,
      anon_sym_LT,
    ACTIONS(526), 5,
      sym__text_fragment,
      sym_comment,
      anon_sym_LTscript,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE_LBRACE,
  [3840] = 2,
    ACTIONS(251), 1,
      anon_sym_GT,
    ACTIONS(253), 4,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      sym_attribute_name,
  [3850] = 2,
    ACTIONS(530), 1,
      anon_sym_GT,
    ACTIONS(532), 4,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      sym_attribute_name,
  [3860] = 2,
    ACTIONS(494), 1,
      anon_sym_GT,
    ACTIONS(496), 4,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      sym_attribute_name,
  [3870] = 2,
    ACTIONS(490), 1,
      anon_sym_GT,
    ACTIONS(492), 4,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      sym_attribute_name,
  [3880] = 2,
    ACTIONS(534), 1,
      anon_sym_GT,
    ACTIONS(536), 4,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      sym_attribute_name,
  [3890] = 2,
    ACTIONS(486), 1,
      anon_sym_GT,
    ACTIONS(488), 4,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      sym_attribute_name,
  [3900] = 2,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 4,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      sym_attribute_name,
  [3910] = 2,
    ACTIONS(502), 1,
      anon_sym_GT,
    ACTIONS(504), 4,
      anon_sym_lang,
      anon_sym_src,
      anon_sym_setup,
      sym_attribute_name,
  [3920] = 4,
    ACTIONS(538), 1,
      sym_attribute_value,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_quoted_attribute_value,
  [3933] = 2,
    ACTIONS(476), 1,
      anon_sym_LT,
    ACTIONS(474), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [3942] = 3,
    ACTIONS(544), 1,
      aux_sym_directive_argument_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACK,
    STATE(14), 2,
      sym_directive_argument,
      sym_directive_dynamic_argument,
  [3953] = 2,
    ACTIONS(448), 1,
      anon_sym_LT,
    ACTIONS(446), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [3962] = 4,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 1,
      sym_attribute_value,
    STATE(49), 1,
      sym_quoted_attribute_value,
  [3975] = 2,
    ACTIONS(432), 1,
      anon_sym_LT,
    ACTIONS(430), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [3984] = 2,
    ACTIONS(480), 1,
      anon_sym_LT,
    ACTIONS(478), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [3993] = 2,
    ACTIONS(452), 1,
      anon_sym_LT,
    ACTIONS(450), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [4002] = 2,
    ACTIONS(456), 1,
      anon_sym_LT,
    ACTIONS(454), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [4011] = 4,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    ACTIONS(550), 1,
      sym_attribute_value,
    STATE(59), 1,
      sym_quoted_attribute_value,
  [4024] = 2,
    ACTIONS(460), 1,
      anon_sym_LT,
    ACTIONS(458), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [4033] = 2,
    ACTIONS(464), 1,
      anon_sym_LT,
    ACTIONS(462), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [4042] = 4,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    ACTIONS(552), 1,
      sym_attribute_value,
    STATE(61), 1,
      sym_quoted_attribute_value,
  [4055] = 4,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    ACTIONS(554), 1,
      sym_attribute_value,
    STATE(64), 1,
      sym_quoted_attribute_value,
  [4068] = 3,
    ACTIONS(544), 1,
      aux_sym_directive_argument_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym_directive_argument,
      sym_directive_dynamic_argument,
  [4079] = 2,
    ACTIONS(440), 1,
      anon_sym_LT,
    ACTIONS(438), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [4088] = 1,
    ACTIONS(556), 4,
      anon_sym_DQUOTEjavascript_DQUOTE,
      anon_sym_DQUOTEtypescript_DQUOTE,
      anon_sym_DQUOTEjs_DQUOTE,
      anon_sym_DQUOTEts_DQUOTE,
  [4095] = 3,
    ACTIONS(558), 1,
      aux_sym_directive_argument_token1,
    ACTIONS(560), 1,
      anon_sym_LBRACK,
    STATE(19), 2,
      sym_directive_argument,
      sym_directive_dynamic_argument,
  [4106] = 2,
    ACTIONS(424), 1,
      anon_sym_LT,
    ACTIONS(422), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [4115] = 4,
    ACTIONS(562), 1,
      sym_attribute_value,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_quoted_attribute_value,
  [4128] = 4,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    ACTIONS(568), 1,
      sym_attribute_value,
    STATE(67), 1,
      sym_quoted_attribute_value,
  [4141] = 4,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      sym_attribute_value,
    STATE(47), 1,
      sym_quoted_attribute_value,
  [4154] = 4,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    ACTIONS(572), 1,
      sym_attribute_value,
    STATE(77), 1,
      sym_quoted_attribute_value,
  [4167] = 3,
    ACTIONS(558), 1,
      aux_sym_directive_argument_token1,
    ACTIONS(560), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym_directive_argument,
      sym_directive_dynamic_argument,
  [4178] = 4,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    ACTIONS(574), 1,
      sym_attribute_value,
    STATE(69), 1,
      sym_quoted_attribute_value,
  [4191] = 4,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    ACTIONS(576), 1,
      sym_attribute_value,
    STATE(70), 1,
      sym_quoted_attribute_value,
  [4204] = 4,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    ACTIONS(578), 1,
      sym_attribute_value,
    STATE(71), 1,
      sym_quoted_attribute_value,
  [4217] = 4,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    ACTIONS(580), 1,
      sym_attribute_value,
    STATE(72), 1,
      sym_quoted_attribute_value,
  [4230] = 4,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
    ACTIONS(542), 1,
      anon_sym_DQUOTE,
    ACTIONS(582), 1,
      sym_attribute_value,
    STATE(48), 1,
      sym_quoted_attribute_value,
  [4243] = 2,
    ACTIONS(468), 1,
      anon_sym_LT,
    ACTIONS(466), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [4252] = 2,
    ACTIONS(472), 1,
      anon_sym_LT,
    ACTIONS(470), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [4261] = 2,
    ACTIONS(436), 1,
      anon_sym_LT,
    ACTIONS(434), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [4270] = 2,
    ACTIONS(500), 1,
      anon_sym_LT,
    ACTIONS(498), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [4279] = 2,
    ACTIONS(444), 1,
      anon_sym_LT,
    ACTIONS(442), 3,
      sym_comment,
      ts_builtin_sym_end,
      anon_sym_LTscript,
  [4288] = 1,
    ACTIONS(584), 4,
      anon_sym_DQUOTEjavascript_DQUOTE,
      anon_sym_DQUOTEtypescript_DQUOTE,
      anon_sym_DQUOTEjs_DQUOTE,
      anon_sym_DQUOTEts_DQUOTE,
  [4295] = 3,
    ACTIONS(586), 1,
      anon_sym_SQUOTE,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym_quoted_attribute_value,
  [4305] = 3,
    ACTIONS(590), 1,
      anon_sym_SQUOTE,
    ACTIONS(592), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_quoted_attribute_value,
  [4315] = 3,
    ACTIONS(590), 1,
      anon_sym_SQUOTE,
    ACTIONS(592), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_quoted_attribute_value,
  [4325] = 3,
    ACTIONS(594), 1,
      anon_sym_LT_SLASH,
    ACTIONS(596), 1,
      sym_raw_text,
    STATE(131), 1,
      sym_end_tag,
  [4335] = 3,
    ACTIONS(586), 1,
      anon_sym_SQUOTE,
    ACTIONS(588), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_quoted_attribute_value,
  [4345] = 3,
    ACTIONS(598), 1,
      sym__start_tag_name,
    ACTIONS(600), 1,
      sym__template_start_tag_name,
    ACTIONS(602), 1,
      sym__style_start_tag_name,
  [4355] = 3,
    ACTIONS(600), 1,
      sym__template_start_tag_name,
    ACTIONS(602), 1,
      sym__style_start_tag_name,
    ACTIONS(604), 1,
      sym__start_tag_name,
  [4365] = 3,
    ACTIONS(600), 1,
      sym__template_start_tag_name,
    ACTIONS(602), 1,
      sym__style_start_tag_name,
    ACTIONS(606), 1,
      sym__start_tag_name,
  [4375] = 3,
    ACTIONS(608), 1,
      anon_sym_LT_SLASH,
    ACTIONS(610), 1,
      sym_raw_text,
    STATE(195), 1,
      sym_end_tag,
  [4385] = 3,
    ACTIONS(612), 1,
      anon_sym_LT_SLASH,
    ACTIONS(614), 1,
      sym_raw_text,
    STATE(110), 1,
      sym_end_tag,
  [4395] = 1,
    ACTIONS(616), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4400] = 2,
    ACTIONS(612), 1,
      anon_sym_LT_SLASH,
    STATE(114), 1,
      sym_end_tag,
  [4407] = 2,
    ACTIONS(618), 1,
      anon_sym_SQUOTE,
    ACTIONS(620), 1,
      aux_sym_quoted_attribute_value_token1,
  [4414] = 2,
    ACTIONS(594), 1,
      anon_sym_LT_SLASH,
    STATE(141), 1,
      sym_end_tag,
  [4421] = 2,
    ACTIONS(622), 1,
      aux_sym_directive_argument_token1,
    STATE(31), 1,
      sym_directive_modifier,
  [4428] = 2,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(626), 1,
      aux_sym_quoted_attribute_value_token1,
  [4435] = 2,
    ACTIONS(624), 1,
      anon_sym_DQUOTE,
    ACTIONS(628), 1,
      aux_sym_quoted_attribute_value_token2,
  [4442] = 2,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      aux_sym_quoted_attribute_value_token1,
  [4449] = 2,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    ACTIONS(634), 1,
      aux_sym_quoted_attribute_value_token2,
  [4456] = 2,
    ACTIONS(636), 1,
      anon_sym_RBRACK,
    ACTIONS(638), 1,
      sym_directive_dynamic_argument_value,
  [4463] = 2,
    ACTIONS(640), 1,
      sym__end_tag_name,
    ACTIONS(642), 1,
      sym_erroneous_end_tag_name,
  [4470] = 2,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      aux_sym_quoted_attribute_value_token2,
  [4477] = 2,
    ACTIONS(648), 1,
      sym__end_tag_name,
    ACTIONS(650), 1,
      sym_erroneous_end_tag_name,
  [4484] = 2,
    ACTIONS(642), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(648), 1,
      sym__end_tag_name,
  [4491] = 2,
    ACTIONS(650), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(652), 1,
      sym__end_tag_name,
  [4498] = 2,
    ACTIONS(642), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(652), 1,
      sym__end_tag_name,
  [4505] = 1,
    ACTIONS(654), 2,
      sym_raw_text,
      anon_sym_LT_SLASH,
  [4510] = 2,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(656), 1,
      aux_sym_quoted_attribute_value_token2,
  [4517] = 2,
    ACTIONS(658), 1,
      anon_sym_RBRACK,
    ACTIONS(660), 1,
      sym_directive_dynamic_argument_value,
  [4524] = 2,
    ACTIONS(608), 1,
      anon_sym_LT_SLASH,
    STATE(172), 1,
      sym_end_tag,
  [4531] = 2,
    ACTIONS(644), 1,
      anon_sym_SQUOTE,
    ACTIONS(662), 1,
      aux_sym_quoted_attribute_value_token1,
  [4538] = 2,
    ACTIONS(664), 1,
      aux_sym_directive_argument_token1,
    STATE(22), 1,
      sym_directive_modifier,
  [4545] = 2,
    ACTIONS(640), 1,
      sym__end_tag_name,
    ACTIONS(650), 1,
      sym_erroneous_end_tag_name,
  [4552] = 1,
    ACTIONS(666), 1,
      anon_sym_DQUOTE,
  [4556] = 1,
    ACTIONS(668), 1,
      anon_sym_SQUOTE,
  [4560] = 1,
    ACTIONS(668), 1,
      anon_sym_DQUOTE,
  [4564] = 1,
    ACTIONS(670), 1,
      anon_sym_LT_SLASHscript_GT,
  [4568] = 1,
    ACTIONS(672), 1,
      aux_sym_script_element_token1,
  [4572] = 1,
    ACTIONS(674), 1,
      anon_sym_RBRACK,
  [4576] = 1,
    ACTIONS(676), 1,
      anon_sym_LT_SLASHscript_GT,
  [4580] = 1,
    ACTIONS(678), 1,
      anon_sym_LT_SLASHscript_GT,
  [4584] = 1,
    ACTIONS(680), 1,
      anon_sym_EQ,
  [4588] = 1,
    ACTIONS(682), 1,
      anon_sym_RBRACE_RBRACE,
  [4592] = 1,
    ACTIONS(684), 1,
      anon_sym_EQ,
  [4596] = 1,
    ACTIONS(686), 1,
      anon_sym_EQ,
  [4600] = 1,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
  [4604] = 1,
    ACTIONS(690), 1,
      anon_sym_EQ,
  [4608] = 1,
    ACTIONS(692), 1,
      anon_sym_LT_SLASHscript_GT,
  [4612] = 1,
    ACTIONS(640), 1,
      sym__end_tag_name,
  [4616] = 1,
    ACTIONS(694), 1,
      aux_sym_script_element_token1,
  [4620] = 1,
    ACTIONS(696), 1,
      anon_sym_LT_SLASHscript_GT,
  [4624] = 1,
    ACTIONS(698), 1,
      anon_sym_DQUOTEjson_DQUOTE,
  [4628] = 1,
    ACTIONS(700), 1,
      anon_sym_GT,
  [4632] = 1,
    ACTIONS(702), 1,
      anon_sym_LT_SLASHscript_GT,
  [4636] = 1,
    ACTIONS(704), 1,
      anon_sym_GT,
  [4640] = 1,
    ACTIONS(706), 1,
      anon_sym_LT_SLASHscript_GT,
  [4644] = 1,
    ACTIONS(708), 1,
      anon_sym_LT_SLASHscript_GT,
  [4648] = 1,
    ACTIONS(710), 1,
      anon_sym_SQUOTE,
  [4652] = 1,
    ACTIONS(710), 1,
      anon_sym_DQUOTE,
  [4656] = 1,
    ACTIONS(712), 1,
      anon_sym_LT_SLASHscript_GT,
  [4660] = 1,
    ACTIONS(714), 1,
      anon_sym_LT_SLASHscript_GT,
  [4664] = 1,
    ACTIONS(716), 1,
      aux_sym_script_element_token1,
  [4668] = 1,
    ACTIONS(718), 1,
      anon_sym_GT,
  [4672] = 1,
    ACTIONS(720), 1,
      anon_sym_SQUOTE,
  [4676] = 1,
    ACTIONS(720), 1,
      anon_sym_DQUOTE,
  [4680] = 1,
    ACTIONS(722), 1,
      anon_sym_GT,
  [4684] = 1,
    ACTIONS(724), 1,
      aux_sym_script_element_token1,
  [4688] = 1,
    ACTIONS(726), 1,
      anon_sym_EQ,
  [4692] = 1,
    ACTIONS(728), 1,
      anon_sym_EQ,
  [4696] = 1,
    ACTIONS(730), 1,
      anon_sym_EQ,
  [4700] = 1,
    ACTIONS(732), 1,
      anon_sym_RBRACE_RBRACE,
  [4704] = 1,
    ACTIONS(648), 1,
      sym__end_tag_name,
  [4708] = 1,
    ACTIONS(734), 1,
      aux_sym_script_element_token1,
  [4712] = 1,
    ACTIONS(736), 1,
      aux_sym_script_element_token1,
  [4716] = 1,
    ACTIONS(738), 1,
      anon_sym_COLON2,
  [4720] = 1,
    ACTIONS(740), 1,
      anon_sym_EQ,
  [4724] = 1,
    ACTIONS(742), 1,
      aux_sym_script_element_token1,
  [4728] = 1,
    ACTIONS(744), 1,
      aux_sym_script_element_token1,
  [4732] = 1,
    ACTIONS(746), 1,
      anon_sym_GT,
  [4736] = 1,
    ACTIONS(748), 1,
      aux_sym_script_element_token1,
  [4740] = 1,
    ACTIONS(750), 1,
      anon_sym_LT_SLASHscript_GT,
  [4744] = 1,
    ACTIONS(652), 1,
      sym__end_tag_name,
  [4748] = 1,
    ACTIONS(752), 1,
      aux_sym_script_element_token1,
  [4752] = 1,
    ACTIONS(754), 1,
      aux_sym_script_element_token1,
  [4756] = 1,
    ACTIONS(756), 1,
      aux_sym_script_element_token1,
  [4760] = 1,
    ACTIONS(758), 1,
      aux_sym_script_element_token1,
  [4764] = 1,
    ACTIONS(760), 1,
      anon_sym_LT_SLASHscript_GT,
  [4768] = 1,
    ACTIONS(762), 1,
      anon_sym_LT_SLASHscript_GT,
  [4772] = 1,
    ACTIONS(764), 1,
      anon_sym_DQUOTEapplication_SLASHjson_DQUOTE,
  [4776] = 1,
    ACTIONS(766), 1,
      aux_sym_script_element_token1,
  [4780] = 1,
    ACTIONS(768), 1,
      sym_event_name,
  [4784] = 1,
    ACTIONS(770), 1,
      anon_sym_EQ,
  [4788] = 1,
    ACTIONS(772), 1,
      ts_builtin_sym_end,
  [4792] = 1,
    ACTIONS(650), 1,
      sym_erroneous_end_tag_name,
  [4796] = 1,
    ACTIONS(774), 1,
      anon_sym_LT_SLASHscript_GT,
  [4800] = 1,
    ACTIONS(666), 1,
      anon_sym_SQUOTE,
  [4804] = 1,
    ACTIONS(776), 1,
      anon_sym_COLON2,
  [4808] = 1,
    ACTIONS(778), 1,
      sym_event_name,
  [4812] = 1,
    ACTIONS(780), 1,
      anon_sym_LT_SLASHscript_GT,
  [4816] = 1,
    ACTIONS(642), 1,
      sym_erroneous_end_tag_name,
  [4820] = 1,
    ACTIONS(782), 1,
      aux_sym_script_element_token1,
  [4824] = 1,
    ACTIONS(784), 1,
      anon_sym_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 136,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 320,
  [SMALL_STATE(10)] = 361,
  [SMALL_STATE(11)] = 404,
  [SMALL_STATE(12)] = 447,
  [SMALL_STATE(13)] = 490,
  [SMALL_STATE(14)] = 528,
  [SMALL_STATE(15)] = 566,
  [SMALL_STATE(16)] = 606,
  [SMALL_STATE(17)] = 639,
  [SMALL_STATE(18)] = 672,
  [SMALL_STATE(19)] = 709,
  [SMALL_STATE(20)] = 746,
  [SMALL_STATE(21)] = 774,
  [SMALL_STATE(22)] = 802,
  [SMALL_STATE(23)] = 830,
  [SMALL_STATE(24)] = 862,
  [SMALL_STATE(25)] = 890,
  [SMALL_STATE(26)] = 922,
  [SMALL_STATE(27)] = 950,
  [SMALL_STATE(28)] = 979,
  [SMALL_STATE(29)] = 1028,
  [SMALL_STATE(30)] = 1057,
  [SMALL_STATE(31)] = 1084,
  [SMALL_STATE(32)] = 1111,
  [SMALL_STATE(33)] = 1160,
  [SMALL_STATE(34)] = 1187,
  [SMALL_STATE(35)] = 1216,
  [SMALL_STATE(36)] = 1243,
  [SMALL_STATE(37)] = 1292,
  [SMALL_STATE(38)] = 1321,
  [SMALL_STATE(39)] = 1370,
  [SMALL_STATE(40)] = 1397,
  [SMALL_STATE(41)] = 1446,
  [SMALL_STATE(42)] = 1475,
  [SMALL_STATE(43)] = 1504,
  [SMALL_STATE(44)] = 1553,
  [SMALL_STATE(45)] = 1599,
  [SMALL_STATE(46)] = 1625,
  [SMALL_STATE(47)] = 1671,
  [SMALL_STATE(48)] = 1697,
  [SMALL_STATE(49)] = 1723,
  [SMALL_STATE(50)] = 1749,
  [SMALL_STATE(51)] = 1777,
  [SMALL_STATE(52)] = 1805,
  [SMALL_STATE(53)] = 1833,
  [SMALL_STATE(54)] = 1861,
  [SMALL_STATE(55)] = 1887,
  [SMALL_STATE(56)] = 1913,
  [SMALL_STATE(57)] = 1959,
  [SMALL_STATE(58)] = 2005,
  [SMALL_STATE(59)] = 2033,
  [SMALL_STATE(60)] = 2059,
  [SMALL_STATE(61)] = 2105,
  [SMALL_STATE(62)] = 2131,
  [SMALL_STATE(63)] = 2177,
  [SMALL_STATE(64)] = 2203,
  [SMALL_STATE(65)] = 2229,
  [SMALL_STATE(66)] = 2257,
  [SMALL_STATE(67)] = 2303,
  [SMALL_STATE(68)] = 2328,
  [SMALL_STATE(69)] = 2371,
  [SMALL_STATE(70)] = 2396,
  [SMALL_STATE(71)] = 2421,
  [SMALL_STATE(72)] = 2446,
  [SMALL_STATE(73)] = 2471,
  [SMALL_STATE(74)] = 2496,
  [SMALL_STATE(75)] = 2521,
  [SMALL_STATE(76)] = 2546,
  [SMALL_STATE(77)] = 2571,
  [SMALL_STATE(78)] = 2596,
  [SMALL_STATE(79)] = 2629,
  [SMALL_STATE(80)] = 2662,
  [SMALL_STATE(81)] = 2695,
  [SMALL_STATE(82)] = 2728,
  [SMALL_STATE(83)] = 2761,
  [SMALL_STATE(84)] = 2794,
  [SMALL_STATE(85)] = 2827,
  [SMALL_STATE(86)] = 2860,
  [SMALL_STATE(87)] = 2887,
  [SMALL_STATE(88)] = 2910,
  [SMALL_STATE(89)] = 2933,
  [SMALL_STATE(90)] = 2956,
  [SMALL_STATE(91)] = 2979,
  [SMALL_STATE(92)] = 3002,
  [SMALL_STATE(93)] = 3025,
  [SMALL_STATE(94)] = 3048,
  [SMALL_STATE(95)] = 3071,
  [SMALL_STATE(96)] = 3094,
  [SMALL_STATE(97)] = 3117,
  [SMALL_STATE(98)] = 3140,
  [SMALL_STATE(99)] = 3163,
  [SMALL_STATE(100)] = 3186,
  [SMALL_STATE(101)] = 3209,
  [SMALL_STATE(102)] = 3232,
  [SMALL_STATE(103)] = 3250,
  [SMALL_STATE(104)] = 3267,
  [SMALL_STATE(105)] = 3279,
  [SMALL_STATE(106)] = 3291,
  [SMALL_STATE(107)] = 3303,
  [SMALL_STATE(108)] = 3315,
  [SMALL_STATE(109)] = 3327,
  [SMALL_STATE(110)] = 3339,
  [SMALL_STATE(111)] = 3351,
  [SMALL_STATE(112)] = 3363,
  [SMALL_STATE(113)] = 3375,
  [SMALL_STATE(114)] = 3387,
  [SMALL_STATE(115)] = 3399,
  [SMALL_STATE(116)] = 3411,
  [SMALL_STATE(117)] = 3423,
  [SMALL_STATE(118)] = 3435,
  [SMALL_STATE(119)] = 3447,
  [SMALL_STATE(120)] = 3459,
  [SMALL_STATE(121)] = 3471,
  [SMALL_STATE(122)] = 3483,
  [SMALL_STATE(123)] = 3495,
  [SMALL_STATE(124)] = 3507,
  [SMALL_STATE(125)] = 3519,
  [SMALL_STATE(126)] = 3531,
  [SMALL_STATE(127)] = 3543,
  [SMALL_STATE(128)] = 3555,
  [SMALL_STATE(129)] = 3567,
  [SMALL_STATE(130)] = 3579,
  [SMALL_STATE(131)] = 3591,
  [SMALL_STATE(132)] = 3602,
  [SMALL_STATE(133)] = 3613,
  [SMALL_STATE(134)] = 3624,
  [SMALL_STATE(135)] = 3635,
  [SMALL_STATE(136)] = 3646,
  [SMALL_STATE(137)] = 3657,
  [SMALL_STATE(138)] = 3668,
  [SMALL_STATE(139)] = 3679,
  [SMALL_STATE(140)] = 3690,
  [SMALL_STATE(141)] = 3701,
  [SMALL_STATE(142)] = 3712,
  [SMALL_STATE(143)] = 3723,
  [SMALL_STATE(144)] = 3734,
  [SMALL_STATE(145)] = 3745,
  [SMALL_STATE(146)] = 3756,
  [SMALL_STATE(147)] = 3767,
  [SMALL_STATE(148)] = 3778,
  [SMALL_STATE(149)] = 3789,
  [SMALL_STATE(150)] = 3798,
  [SMALL_STATE(151)] = 3809,
  [SMALL_STATE(152)] = 3818,
  [SMALL_STATE(153)] = 3829,
  [SMALL_STATE(154)] = 3840,
  [SMALL_STATE(155)] = 3850,
  [SMALL_STATE(156)] = 3860,
  [SMALL_STATE(157)] = 3870,
  [SMALL_STATE(158)] = 3880,
  [SMALL_STATE(159)] = 3890,
  [SMALL_STATE(160)] = 3900,
  [SMALL_STATE(161)] = 3910,
  [SMALL_STATE(162)] = 3920,
  [SMALL_STATE(163)] = 3933,
  [SMALL_STATE(164)] = 3942,
  [SMALL_STATE(165)] = 3953,
  [SMALL_STATE(166)] = 3962,
  [SMALL_STATE(167)] = 3975,
  [SMALL_STATE(168)] = 3984,
  [SMALL_STATE(169)] = 3993,
  [SMALL_STATE(170)] = 4002,
  [SMALL_STATE(171)] = 4011,
  [SMALL_STATE(172)] = 4024,
  [SMALL_STATE(173)] = 4033,
  [SMALL_STATE(174)] = 4042,
  [SMALL_STATE(175)] = 4055,
  [SMALL_STATE(176)] = 4068,
  [SMALL_STATE(177)] = 4079,
  [SMALL_STATE(178)] = 4088,
  [SMALL_STATE(179)] = 4095,
  [SMALL_STATE(180)] = 4106,
  [SMALL_STATE(181)] = 4115,
  [SMALL_STATE(182)] = 4128,
  [SMALL_STATE(183)] = 4141,
  [SMALL_STATE(184)] = 4154,
  [SMALL_STATE(185)] = 4167,
  [SMALL_STATE(186)] = 4178,
  [SMALL_STATE(187)] = 4191,
  [SMALL_STATE(188)] = 4204,
  [SMALL_STATE(189)] = 4217,
  [SMALL_STATE(190)] = 4230,
  [SMALL_STATE(191)] = 4243,
  [SMALL_STATE(192)] = 4252,
  [SMALL_STATE(193)] = 4261,
  [SMALL_STATE(194)] = 4270,
  [SMALL_STATE(195)] = 4279,
  [SMALL_STATE(196)] = 4288,
  [SMALL_STATE(197)] = 4295,
  [SMALL_STATE(198)] = 4305,
  [SMALL_STATE(199)] = 4315,
  [SMALL_STATE(200)] = 4325,
  [SMALL_STATE(201)] = 4335,
  [SMALL_STATE(202)] = 4345,
  [SMALL_STATE(203)] = 4355,
  [SMALL_STATE(204)] = 4365,
  [SMALL_STATE(205)] = 4375,
  [SMALL_STATE(206)] = 4385,
  [SMALL_STATE(207)] = 4395,
  [SMALL_STATE(208)] = 4400,
  [SMALL_STATE(209)] = 4407,
  [SMALL_STATE(210)] = 4414,
  [SMALL_STATE(211)] = 4421,
  [SMALL_STATE(212)] = 4428,
  [SMALL_STATE(213)] = 4435,
  [SMALL_STATE(214)] = 4442,
  [SMALL_STATE(215)] = 4449,
  [SMALL_STATE(216)] = 4456,
  [SMALL_STATE(217)] = 4463,
  [SMALL_STATE(218)] = 4470,
  [SMALL_STATE(219)] = 4477,
  [SMALL_STATE(220)] = 4484,
  [SMALL_STATE(221)] = 4491,
  [SMALL_STATE(222)] = 4498,
  [SMALL_STATE(223)] = 4505,
  [SMALL_STATE(224)] = 4510,
  [SMALL_STATE(225)] = 4517,
  [SMALL_STATE(226)] = 4524,
  [SMALL_STATE(227)] = 4531,
  [SMALL_STATE(228)] = 4538,
  [SMALL_STATE(229)] = 4545,
  [SMALL_STATE(230)] = 4552,
  [SMALL_STATE(231)] = 4556,
  [SMALL_STATE(232)] = 4560,
  [SMALL_STATE(233)] = 4564,
  [SMALL_STATE(234)] = 4568,
  [SMALL_STATE(235)] = 4572,
  [SMALL_STATE(236)] = 4576,
  [SMALL_STATE(237)] = 4580,
  [SMALL_STATE(238)] = 4584,
  [SMALL_STATE(239)] = 4588,
  [SMALL_STATE(240)] = 4592,
  [SMALL_STATE(241)] = 4596,
  [SMALL_STATE(242)] = 4600,
  [SMALL_STATE(243)] = 4604,
  [SMALL_STATE(244)] = 4608,
  [SMALL_STATE(245)] = 4612,
  [SMALL_STATE(246)] = 4616,
  [SMALL_STATE(247)] = 4620,
  [SMALL_STATE(248)] = 4624,
  [SMALL_STATE(249)] = 4628,
  [SMALL_STATE(250)] = 4632,
  [SMALL_STATE(251)] = 4636,
  [SMALL_STATE(252)] = 4640,
  [SMALL_STATE(253)] = 4644,
  [SMALL_STATE(254)] = 4648,
  [SMALL_STATE(255)] = 4652,
  [SMALL_STATE(256)] = 4656,
  [SMALL_STATE(257)] = 4660,
  [SMALL_STATE(258)] = 4664,
  [SMALL_STATE(259)] = 4668,
  [SMALL_STATE(260)] = 4672,
  [SMALL_STATE(261)] = 4676,
  [SMALL_STATE(262)] = 4680,
  [SMALL_STATE(263)] = 4684,
  [SMALL_STATE(264)] = 4688,
  [SMALL_STATE(265)] = 4692,
  [SMALL_STATE(266)] = 4696,
  [SMALL_STATE(267)] = 4700,
  [SMALL_STATE(268)] = 4704,
  [SMALL_STATE(269)] = 4708,
  [SMALL_STATE(270)] = 4712,
  [SMALL_STATE(271)] = 4716,
  [SMALL_STATE(272)] = 4720,
  [SMALL_STATE(273)] = 4724,
  [SMALL_STATE(274)] = 4728,
  [SMALL_STATE(275)] = 4732,
  [SMALL_STATE(276)] = 4736,
  [SMALL_STATE(277)] = 4740,
  [SMALL_STATE(278)] = 4744,
  [SMALL_STATE(279)] = 4748,
  [SMALL_STATE(280)] = 4752,
  [SMALL_STATE(281)] = 4756,
  [SMALL_STATE(282)] = 4760,
  [SMALL_STATE(283)] = 4764,
  [SMALL_STATE(284)] = 4768,
  [SMALL_STATE(285)] = 4772,
  [SMALL_STATE(286)] = 4776,
  [SMALL_STATE(287)] = 4780,
  [SMALL_STATE(288)] = 4784,
  [SMALL_STATE(289)] = 4788,
  [SMALL_STATE(290)] = 4792,
  [SMALL_STATE(291)] = 4796,
  [SMALL_STATE(292)] = 4800,
  [SMALL_STATE(293)] = 4804,
  [SMALL_STATE(294)] = 4808,
  [SMALL_STATE(295)] = 4812,
  [SMALL_STATE(296)] = 4816,
  [SMALL_STATE(297)] = 4820,
  [SMALL_STATE(298)] = 4824,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(34),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(37),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(293),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(243),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(9),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(164),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(51),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(53),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(271),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(272),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(15),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(179),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_modifiers_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_modifiers_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_modifiers_repeat1, 2), SHIFT_REPEAT(228),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_modifiers, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_modifiers, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_modifier, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_modifier, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_argument, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_argument, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_dynamic_argument, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_dynamic_argument, 3),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_modifiers_repeat1, 2), SHIFT_REPEAT(211),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_dynamic_argument, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_dynamic_argument, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wx_directive_attribute, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wx_directive_attribute, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_binding, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_binding, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_binding, 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_binding, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute, 6),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_attribute, 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wx_directive_attribute, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wx_directive_attribute, 3),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(82),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(202),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(290),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(102),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(116),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(62),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode_attribute, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode_attribute, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(85),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(203),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(296),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(103),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(137),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2), SHIFT_REPEAT(68),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(78),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(204),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(81),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_element_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_element_repeat1, 2), SHIFT_REPEAT(238),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_element_repeat1, 2), SHIFT_REPEAT(241),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_element_repeat1, 2), SHIFT_REPEAT(126),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_element_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_element_repeat1, 2), SHIFT_REPEAT(288),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_element_repeat1, 2), SHIFT_REPEAT(264),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_element_repeat1, 2), SHIFT_REPEAT(265),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_element_repeat1, 2), SHIFT_REPEAT(161),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_element_repeat1, 2), SHIFT_REPEAT(298),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_config_element, 6),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_config_element, 6),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_element, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_element, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_element, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_element, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_element, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_element, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 4),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_config_element, 5),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_config_element, 5),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_element, 5),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_element, 5),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_attribute, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lang_attribute, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_src_attribute, 3),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_src_attribute, 3),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_attribute, 3),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_other_attribute, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_config_element, 7),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_config_element, 7),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_attribute, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setup_attribute, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_start_tag, 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_start_tag, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_start_tag, 4),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_start_tag, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_name_attribute, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_name_attribute, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_type_attribute, 3),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_type_attribute, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 3),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_start_tag, 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [772] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_mpx_external_scanner_create(void);
void tree_sitter_mpx_external_scanner_destroy(void *);
bool tree_sitter_mpx_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_mpx_external_scanner_serialize(void *, char *);
void tree_sitter_mpx_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mpx(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_mpx_external_scanner_create,
      tree_sitter_mpx_external_scanner_destroy,
      tree_sitter_mpx_external_scanner_scan,
      tree_sitter_mpx_external_scanner_serialize,
      tree_sitter_mpx_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
