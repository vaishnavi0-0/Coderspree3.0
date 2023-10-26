from math import *
from collections import *
from sys import *
from os import *

num = int(input())
def fibo(m):
    num,n=1,1
    for i in range(1,m):
        num,n=n,num+n
    return num
n = fibo(num)
print(n)

