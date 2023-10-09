n = int(input())
even=0
odd=0
while(n!=0):
    t = n%10
    if(t%2==0):
        even=even + t
    else:
        odd= odd + t
    n = n//10

print(even," ",odd)
