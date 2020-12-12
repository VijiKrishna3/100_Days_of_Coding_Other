var readlineSync = require('readline-sync');

function twoElemSum(arr, k) {
    for (var i = 0; i < arr.length; ++i)
        for (var j = i; j < arr.length; ++j)
            if (arr[i] + arr[j] == k) return true;
    
    return false;
}

var n = Number(readlineSync.question('Number of elements in the array: '));
var nums = [];

for (var i = 0; i < n; ++i){
    var x = Number(readlineSync.question('Number: '));
    nums.push(x);
}

var k = Number(readlineSync.question('Input k: '));

console.log(twoElemSum(nums, k));
