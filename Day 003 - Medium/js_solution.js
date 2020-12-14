var readlineSync = require('readline-sync');

function findPrimes(n) {
    const primes = new Array(n + 1);
    const nums = new Array();

    primes[0] = true; primes[1] = true;
    for (let i = 2; i < n; ++i){
        if (!primes[i]){
            nums.push(i);
            for (let j = 2 * i; j <= n; j += i)
                primes[j] = true;
        }
    }

    return nums;
};


var n = Number(readlineSync.question('Enter upper number limit (>2): '));
console.log(findPrimes(n));