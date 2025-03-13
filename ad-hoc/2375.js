let input = require('fs').readFileSync('/dev/stdin', 'utf8');
let lines = input.split('\n');

let d = parseInt(lines[0]);
//d = input().split(d);
let b1 = parseInt(lines[1]);
let b2 = parseInt(lines[2]);
let b3 = parseInt(lines[3]);
if(d > b1 || d > b2 || d > b3) console.log('N');
else console.log('S');