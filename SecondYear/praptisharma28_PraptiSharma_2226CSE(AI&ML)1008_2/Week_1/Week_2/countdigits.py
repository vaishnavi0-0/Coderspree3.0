def count(n):
    count = 0
    num = str(n)
    
    for digit in num:
        if digit != '0' and n % int(digit) == 0:
            count += 1
    
    return count
