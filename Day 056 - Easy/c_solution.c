#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define min(a, b) (((a) < (b)) ? (a) : (b));
#define max(a, b) (((a) > (b)) ? (a) : (b));

typedef struct {
    int start;
    int end;
} Interval;

bool compare_function(Interval* a, Interval* b) {
    return (a->start - b->start);
}

void mergeArrays(Interval* arr, int *n) {
    int x = 0;
    for (int i = 1; i < *n; ++i){
        if ((arr+x)->end >= (arr+i)->start){
            (arr+x)->start = min((arr+x)->start, (arr+i)->start);
            (arr+x)->end = max((arr+x)->end, (arr+i)->end);
        }
        else {
            ++x;
            *(arr+x) = *(arr+i);
        }
    }

    *n = x;
}

int main() {
    int n;
    printf("Enter number of intervals: ");
    scanf("%d", &n);

    Interval* arr = calloc(n, sizeof(Interval));

    for (int i = 0; i < n; ++i){
        printf("Start and end of interval %d: ", i + 1);
        scanf("%d %d", &(arr+i)->start, &(arr+i)->end);
    }

    qsort (arr, n, sizeof(Interval), compare_function);

    mergeArrays(arr, &n);

    printf("Meregd intervals: \n");
    for (int i = 0; i <= n; ++i){
        printf("%d %d \n", (arr+i)->start, (arr+i)->end);
    }
    
    free(arr);
    return 0;
}