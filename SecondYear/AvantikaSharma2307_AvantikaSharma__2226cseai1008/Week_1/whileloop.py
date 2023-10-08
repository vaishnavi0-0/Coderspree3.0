## Note : For printing multiple values in one line, put them inside print separated by space.
## You can follow this syntax for printing values of two variables val1 and val2 separaetd by space -
## print(val1, " ", val2)

n=int(input())
sum1=0
sum2=0
while(n!=0):
    r=n%10
    if(r%2==0):
        sum1=sum1+r
    else:
        sum2=sum2+r
    n=n//10

print(sum1," ",sum2)        