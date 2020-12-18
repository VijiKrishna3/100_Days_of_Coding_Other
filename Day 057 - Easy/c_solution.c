#include <stdio.h>
#include <stdlib.h>

#define min(a, b) (((a) < (b)) ? (a) : (b));
#define max(a, b) (((a) > (b)) ? (a) : (b));

int findProfit(int* stock, int n) {
    int max_profit = 0, current_max = 0;

    for (int x = n -1; x > 0; --x) {
        current_max = max(current_max, stock[x]);
        max_profit = max(max_profit, (current_max - stock[x]));
    }
    return max_profit;
}

int main() {
    int n;
    printf("Input number of stock prices: ");
    scanf("%d", &n);

    int stockPrice[n];
    
    for(int i = 0; i < n; ++i){
        printf("Enter stock price for the %d. day: ", i + 1);
        scanf("%d", &stockPrice[i]);
    }

    printf("\nMaximum profit that can be obtained is %d.", findProfit(stockPrice, n));
    return 0;
}