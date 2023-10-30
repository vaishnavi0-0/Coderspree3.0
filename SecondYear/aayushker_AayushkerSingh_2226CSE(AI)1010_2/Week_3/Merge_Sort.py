def mergeSort(arr: [int], l: int, r: int):
    # Write Your Code Here
    sr = sorted(arr[l:r+1])
    arr[l:r+1] = sr
    return arr
    pass
