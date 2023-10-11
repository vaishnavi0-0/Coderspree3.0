def fibonacci(n):
    if n == 1:
        return 1
    elif n == 2:
        return 1
    else:
        a, b = 1, 1
        for _ in range(n - 2):
            a, b = b, a + b
        return b

# Example usage:
n = 6
result = fibonacci(n)
print(f"The {n}-th Fibonacci number is: {result}")