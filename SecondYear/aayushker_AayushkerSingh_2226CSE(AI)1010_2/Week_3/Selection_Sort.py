from os import *
from sys import *
from collections import *
from math import *

def selectionSort(arr,n):
    # Write your code here
    # Do not return anything. Update the given array in-place
    n = len(arr)

    for i in range(n):
        li = i
        
        for j in range(i + 1, n):
            if arr[j] < arr[li]:
                li = j

        arr[i], arr[li] = arr[li], arr[i]
    return arr
    pass