# Interval class
class Interval:
    def __init__(self, a, b):
        self.a = a
        self.b = b

# Function code
def mergeIntervals(arr):
    x = 0
    for i in range(n):
        if arr[x].b >= arr[i].a:
            arr[x].a = min(arr[x].a, arr[i].a)
            arr[x].b = max(arr[x].b, arr[i].b)
        else:
            x += 1
            arr[x] = arr[i]
    
    return arr[:(x + 1)]


# Driver Code
if __name__ == "__main__":
    n = int(input("Enter number of intervals: "))
    intervals = []

    for i in range(n):
        s = int(input("Start of interval: "))
        e = int(input("End of interval: "))
        intervals.append(Interval(s, e))

    intervals.sort(key=lambda x: x.a)
    intervals = mergeIntervals(intervals)

    # Printing the array
    print("Modified array: ")
    for i in range(len(intervals)):
        print('[{}, {}]\n'.format(intervals[i].a, intervals[i].b))