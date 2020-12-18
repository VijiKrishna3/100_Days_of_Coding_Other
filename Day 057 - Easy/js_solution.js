var readlineSync = require('readline-sync');

function getMax(arr) {
    let max_profit = 0, current_max = 0;
    arr.reverse().forEach(function(stonk) {
        current_max = Math.max(current_max, stonk);
        max_profit = Math.max(max_profit, current_max - stonk);
    });
        
    return max_profit
}

var n = Number(readlineSync.question('Enter number of stonks: '));
var stonks = [];

for (var i = 0; i < n; ++i)
    stonks.push(Number(readlineSync.question('Stonk: ')));

console.log('\nMax profit obtained is %d.', getMax(stonks));