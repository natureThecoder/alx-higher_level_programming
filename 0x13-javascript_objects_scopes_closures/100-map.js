#!/usr/bin/node
/* Imports an array and computes new array */
const list = require.map('./100-data.js').list;

console.log(list);
console.log(list.map((v, i) => v * i));
