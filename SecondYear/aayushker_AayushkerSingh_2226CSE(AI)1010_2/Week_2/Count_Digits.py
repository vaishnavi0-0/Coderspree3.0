def countDigits(n: int) -> int:
    a=0
    b=n
    while (n!=0):
        if (n%10!=0 and b%(n%10)==0):
            a=a+1
        n = n//10
    return a
    pass
