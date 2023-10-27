n = int(input())
o = n
s = 0

l = len(str(n))
while n > 0:
    d = n % 10
    s += d ** l
    n //= 10

if s == o:
    print("True")
else:
    print("False")
