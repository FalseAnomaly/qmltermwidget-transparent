#!/usr/bin/node
const fs = require('fs');
let content = fs.readFileSync('./Makefile', 'utf8');
content = content.replace(/QMLTermWidget/, 'QmlTermWidgetTransparent');
fs.writeFileSync('./Makefile', content);