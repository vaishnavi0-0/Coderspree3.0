def linearSearch(n, num, arr):
    for i in range(n):
        if arr[i] == num:
            return i
    return -1
