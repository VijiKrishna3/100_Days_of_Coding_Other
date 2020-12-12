# Function code
def twoElemExist(arr, k):
    for a in arr:
        if (k-a) in arr:
            if (arr.index(k - a) != arr.index(a) or arr.count(k - a) > 1):
                return True

    return False



# Driver Code
if __name__ == "__main__":
    n = int(input("Enter number of elements: "))
    numbers = []

    for i in range(n):
        numbers.append(int(input("Number: ")))

    k = int(input("Enter k: "))

    print(twoElemExist(numbers, k))

