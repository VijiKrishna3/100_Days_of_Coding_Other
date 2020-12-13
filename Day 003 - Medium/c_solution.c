#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sieve(bool *arr, int n)
{
    for (int i = 2; i < n; ++i)
        if (!*(arr + i))
            for (int j = 2 * i; j <= n; j += i)
                *(arr + j) = true;
}

int main()
{
    int n;
    bool *arr;

    printf("Enter upper number limt (>2): ");
    scanf("%d", &n);

    arr = (bool*)calloc((n + 1), sizeof(bool));

    sieve(arr, n);

    for (int i = 0; i < n + 1; ++i)
        if (!*(arr + i)) printf("%d", i);
    
    return 0;
}