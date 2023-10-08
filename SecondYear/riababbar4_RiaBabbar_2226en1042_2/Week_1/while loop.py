def sum_of_even_odd_digits(n):
    even_sum = 0
    odd_sum = 0
    
    while n > 0:
        digit = n % 10
        if digit % 2 == 0:
            even_sum += digit
        else:
            odd_sum += digit
        n //= 10

    print(f"Sum of even digits: {even_sum}")
    print(f"Sum of odd digits: {odd_sum}")
