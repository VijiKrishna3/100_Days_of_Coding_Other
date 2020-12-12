#include <stdio.h>
#include <stdlib.h>

int compare_function(const void *a,const void *b) {
    return ( *(int*)a - *(int*)b );
}

int main()
{
    int n, *arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; ++i){
        printf("Number %d: ", i + 1);
        scanf("%d", &*(arr + i));
        *(arr + i) *= *(arr + i);
    }

    qsort (arr, n, sizeof(int), compare_function);

    printf("Modified array: \n");
    for (int i = 0; i < n; ++i){
        printf("%d ", *(arr + i));
    }
    
    free(arr);
    return 0;
}