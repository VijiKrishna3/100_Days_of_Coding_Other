#include <iostream>
#include <vector>

using namespace std;

void sieve(vector<bool> &arr, int n)
{
    arr[0] = true; arr[1] = true;

    for (int i = 2; i < n; ++i)
        if (!arr[i])
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = true;
}

int main()
{
    int n;
    cout << "Enter upper number limit (>2): ";
    cin >> n;

    vector<bool> arr((long)n + 1);

    sieve(arr, n);

    for (int i = 0; i < n + 1; ++i)
        if (!arr[i]) cout << i << " ";

    return 0;
}