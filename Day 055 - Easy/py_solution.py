# Function code
def squareArray(arr):
    for i in range(len(arr)):
        arr[i] = arr[i] * arr[i]
    
    arr.sort()
    return arr


# Driver Code
if __name__ == "__main__":
    n = int(input("Enter number of elements: "))
    numbers = []

    for i in range(n):
        numbers.append(int(input("Number: ")))

    numbers = squareArray(numbers)

    # Printing the array
    print("Modified array: ")
    print(numbers)
