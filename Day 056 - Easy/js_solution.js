var readlineSync = require('readline-sync');

function mergeIntervals(arr) {
    let x = 0;
    for (var i = 1; i < arr.length; ++i){
        if (arr[x].end >= arr[i].start){
            arr[x].start = Math.min(arr[x].start, arr[i].start);
            arr[x].end = Math.max(arr[x].end, arr[x].end);
        }
        else {
            ++x;
            arr[x] = arr[i];
        }
    }

    return arr.slice(0, (x+1));
}

var n = Number(readlineSync.question('Enter number of intervals: '));
var intervals = [];

for (var i = 0; i < n; ++i) {
    var start = Number(readlineSync.question('Start of interval: '));
    var end = Number(readlineSync.question('End of interval: '));
    intervals.push({start, end});
}

intervals.sort((x, y) => x.start - y.start);
intervals = mergeIntervals(intervals);

console.log('\nMerged intervals:');
console.log(intervals);