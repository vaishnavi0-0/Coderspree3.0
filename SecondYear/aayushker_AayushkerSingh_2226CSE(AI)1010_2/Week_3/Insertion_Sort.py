from os import *
from sys import *
from collections import *
from math import *

from typing import List

def insertionSort(n: int, arr: List[int]) -> None:
    # Write your code here.
    for i in range(1, len(arr)):
        k = arr[i]
        j = i - 1

        while j >= 0 and k < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1

        arr[j + 1] = k
    return arr
    pass