def check_char_type(char):
    if 'A' <= char <= 'Z':
        return 1
    elif 'a' <= char <= 'z':
        return 0
    else:
        return -1

# Taking input from the user
user_input = input("Enter a character: ")

# Checking and printing the result
result = check_char_type(user_input)
print(result)