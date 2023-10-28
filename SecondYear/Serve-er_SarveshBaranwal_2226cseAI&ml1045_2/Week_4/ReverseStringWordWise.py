
def reverseStringWordWise(string):

    a=string.split()

    b=a[::-1]

    for i in b:

        print(str(i),end=" ")

    return ""

string = input()
ans = reverseStringWordWise(string)
print(ans)
        