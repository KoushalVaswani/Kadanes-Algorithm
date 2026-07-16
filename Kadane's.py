def MaxSubarraySum(a)->int:
    currSum = 0
    maxSum = 0
    for i in range(len(a)):
        currSum += a[i]
        maxSum = max(maxSum , currSum)
        if(currSum < 0):
            currSum = 0
    return maxSum

if __name__ == "__main__":
    n = int(input("Enter the number of elements : "))
    arr = list(map(int, input(f"Enter {n} array elements: ").split()))
    print(MaxSubarraySum(arr))