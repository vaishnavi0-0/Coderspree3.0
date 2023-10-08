def printTriangle(n):
    # Check constraints
    if 1 <= n <= 20:
        for i in range(1, n + 1):
            print(str(i) * i)
