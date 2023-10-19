from math import *
from collections import *
from sys import *
from os import *

## Read input as specified in the question.
## Print output as specified in the question.
a=int(input())
def fibo(n):
    # if(a==1):
    #     return (1)
    # elif(a==2):
    #     return (1)
    # else:
    #     f=fibo(a-1)+fibo(a-2)
    #     return (f) 
    a,b=1,1
    for i in range(1,n):
        a,b=b,a+b
    return a    

b=fibo(a)
print(b)