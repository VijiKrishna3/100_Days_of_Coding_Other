var readlineSync = require('readline-sync');

var n = Number(readlineSync.question('Number of elements in the array: '));
var nums = [];

for (var i = 0; i < n; ++i){
    var x = Number(readlineSync.question('Number: '));
    nums.push(x * x);
}

nums.sort((a, b) => a - b);

console.log(nums);