from typing import List

def generateFibonacciNumbers(n: int) -> List[int]: 
    # Write your code here
    a,b,i=-1,1,1
    l=[]
    while(i<=n):
            c=a+b       
            a=b
            b=c
            l.append(c)
            i+=1

    return l
    pass