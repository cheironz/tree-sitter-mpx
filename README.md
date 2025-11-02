# tree-sitter-mpx

[![npm](https://img.shields.io/npm/v/tree-sitter-mpx.svg)](https://www.npmjs.com/package/tree-sitter-mpx)
[![build](https://img.shields.io/travis/com/cheironz/tree-sitter-mpx/master.svg)](https://travis-ci.com/cheironz/tree-sitter-mpx/builds)

MPX framework grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

MPX 是滴滴出行开源的增强型小程序开发框架，支持跨平台小程序开发。本语法解析器支持 MPX 单文件组件（.mpx 文件）的完整语法解析。

_Note: This grammar is not responsible for parsing embedded languages, see [Multi-language Documents](http://tree-sitter.github.io/tree-sitter/using-parsers#multi-language-documents) for more info._

[Changelog](https://github.com/cheironz/tree-sitter-mpx/blob/master/CHANGELOG.md)

## Features

- ✅ **完整的 MPX 语法支持**
  - `<template>` 模板块（支持小程序原生语法）
  - `<script>` 脚本块（JavaScript/TypeScript）
  - `<style>` 样式块
  - `<script type="application/json">` 或 `<script name="json">` 配置块

- ✅ **小程序原生指令**
  - 条件渲染：`wx:if`, `wx:elif`, `wx:else`
  - 列表渲染：`wx:for`, `wx:key`, `wx:for-index`, `wx:for-item`
  - 显示控制：`wx:model`, `wx:show`, `wx:hidden`

- ✅ **事件绑定**
  - `bindtap`, `catchtap`, `bindinput` 等
  - `capture-bind`, `capture-catch` 支持

- ✅ **跨平台支持**
  - `mode="weixin"`, `mode="ali"` 等条件编译
  - 支持微信、支付宝、百度、字节跳动等平台

- ✅ **Vue 风格语法兼容**
  - `v-if`, `v-for`, `v-model` 等指令
  - `:key`, `@click` 等简写语法

## Install

```sh
npm install tree-sitter-mpx tree-sitter
```

## Usage

```js
const Parser = require("tree-sitter");
const Mpx = require("tree-sitter-mpx");

const parser = new Parser();
parser.setLanguage(Mpx);

const sourceCode = `
<template>
  <view class="container">
    <text wx:if="{{showText}}">{{message}}</text>
    <button bindtap="handleTap">点击我</button>
  </view>
</template>

<script>
createComponent({
  data: {
    showText: true,
    message: 'Hello MPX'
  },
  methods: {
    handleTap() {
      console.log('button tapped')
    }
  }
})
</script>

<style>
.container {
  padding: 20rpx;
}
</style>

<script type="application/json">
{
  "navigationBarTitleText": "MPX Page"
}
</script>
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
```

## Supported Syntax

### Template Block
```html
<template mode="weixin">
  <view>
    <text wx:if="{{condition}}">条件文本</text>
    <view wx:for="{{items}}" wx:key="id">
      <text>{{item.name}}</text>
    </view>
    <button bindtap="handleClick">点击</button>
  </view>
</template>
```

### Script Block
```javascript
<script>
import { createComponent } from '@mpxjs/core'

createComponent({
  data: {
    items: []
  },
  methods: {
    handleClick() {
      // handle click
    }
  }
})
</script>
```

### Style Block
```css
<style>
.container {
  padding: 20rpx;
}
</style>
```

### JSON Config Block
```html
<!-- 纯 JSON 模式 -->
<script type="application/json">
{
  "navigationBarTitleText": "MPX Page",
  "usingComponents": {}
}
</script>

<!-- 或 CommonJS 模式 -->
<script name="json">
module.exports = {
  "navigationBarTitleText": "MPX Page",
  "usingComponents": {}
}
</script>
```

### Cross-Platform Templates
```html
<!-- 微信小程序 -->
<template mode="weixin">
  <button bindtap="handleTap">微信按钮</button>
</template>

<!-- 支付宝小程序 -->
<template mode="ali">
  <button onTap="handleTap">支付宝按钮</button>
</template>
```

## Development

### Setup

```sh
# Clone the repository
git clone https://github.com/cheironz/tree-sitter-mpx.git
cd tree-sitter-mpx

# Install dependencies
npm install

# Generate the parser
npm run prepack

# Run tests
npm test
```

### Testing

```sh
# Run the test suite
yarn tree-sitter test

# Run specific test cases
yarn tree-sitter test --filter "template"
```

### Grammar Development

1. Modify `grammar.js` to add or change syntax rules
2. Run `yarn tree-sitter generate` to regenerate the parser
3. Add test cases to `corpus/spec.txt`
4. Run tests to verify changes

## License

MIT © [Cheiron](https://github.com/cheironz)

## Related Projects

- [MPX Framework](https://github.com/didi/mpx) - The official MPX framework
- [tree-sitter](https://github.com/tree-sitter/tree-sitter) - The parser generator tool
- [tree-sitter-html](https://github.com/tree-sitter/tree-sitter-html) - HTML grammar (used as dependency)
