#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool defTwoSum(int* arr, int k, int len)
{
    for (int i = 0; i < len; ++i)
        for (int j = i + 1; j < len; ++j)
            if (*(arr + i) + *(arr + j) == k)
                return true;

    return false;
}

int main()
{
    int n, *arr, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; ++i){
        printf("Number %d: ", i + 1);
        scanf("%d", &*(arr + i));
    }

    printf("Enter k: ");
    scanf("%d", &k);

    printf("Result: %s", defTwoSum(arr, k, n) ? "true" : "false");
    
    free(arr);
    return 0;
}