def printSquare(n):
    # Check constraints
    if 1 <= n <= 20:
        for i in range(n):
            for j in range(n):
                print("*", end=" ")
            print()
