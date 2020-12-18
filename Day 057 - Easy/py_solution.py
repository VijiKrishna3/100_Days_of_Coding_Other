# Function code
def maxProfit(stonks):
    max_profit, current_max = 0, 0
    for stonk in reversed(stonks):
        current_max = max(current_max, stonk)
        max_profit = max(max_profit, current_max - stonk)
    return max_profit

# Driver Code
if __name__ == "__main__":
    n = int(input("Enter number of stonk prices: "))
    stonks = []

    for i in range(n):
        stonks.append(int(input("Stonk {}: ".format(i + 1))))

    # Printing the result
    print("The max profit you can get is {}. ".format(maxProfit(stonks)))