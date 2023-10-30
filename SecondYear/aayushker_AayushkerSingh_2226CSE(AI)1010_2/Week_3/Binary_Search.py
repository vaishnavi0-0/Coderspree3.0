def search(nums: [int], target: int):
    # write your code logic !!
    l, r = 0, len(arr) - 1

    while l <= r:
        mid = (l + r) // 2

        if arr[mid] == target:
            return mid

        elif arr[mid] < target:
            l = mid + 1

        else:
            r = mid - 1 

    return -1

n= int (input())
arr = list(map(int,input().strip().split()))[:n]
target =int (input())
print (search(arr, target))