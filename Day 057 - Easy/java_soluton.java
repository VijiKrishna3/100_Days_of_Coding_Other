import java.io.*;
import java.util.*;

class day057 {
    public static int getMaxProfit(ArrayList<Integer> stonks) {
        int max_profit = 0, current_max = 0;
        
        Collections.reverse(stonks);
        for (int price : stonks) {
            current_max = Math.max(current_max, price);
            max_profit = Math.max(max_profit, (current_max - price));
        }
        return max_profit;
    }

    public static void main(String args[]) {
        Scanner s = new Scanner(System.in); 
        
        System.out.print("Enter number of stock prices: ");
        int n = s.nextInt();

        ArrayList<Integer> stockPrices = new ArrayList<Integer>();

        for (int i = 0; i < n; ++i)
        {
            System.out.printf("Enter stock price for the %d. day: ", (i + 1));
            stockPrices.add(s.nextInt());
        }

        s.close();
        
        System.out.printf("\nThe most profit obtainable is %d.\n", getMaxProfit(stockPrices));
    } 
} 