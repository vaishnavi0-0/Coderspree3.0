num = int(input())

def fib(m):
    a, b = 1, 1
    for _ in range(m - 1):
        a, b = b, a + b
    return a

n = fib(num)
print(n)
