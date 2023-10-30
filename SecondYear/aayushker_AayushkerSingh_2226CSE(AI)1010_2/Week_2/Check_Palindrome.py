n=int(input())  
# taking n as a input 
## write your code !!
a=n
s=0
rem=0
while(n!=0):
    rem=n%10
    s =s*(10)+rem
    n=n//10
if(a == s):
    print("true")
else:
    print("false")   