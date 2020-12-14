# Function Code
def generatePrimes(n):
    primes = [i for i in range(2, n+1)]

    for i in primes:
        if i*i <= n:
            rem = i*2
            while True:
                if rem > n: break
                elif rem in primes:
                    del primes[primes.index(rem)]
                rem += i
        else: break

    return primes

# Driver Code
if __name__ == "__main__":
    n = int(input("Enter upper number limit (>2): "))
    print(generatePrimes(n))

