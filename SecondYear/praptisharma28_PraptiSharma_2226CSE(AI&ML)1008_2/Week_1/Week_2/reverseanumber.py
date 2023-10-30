def reverse(n):
    b = "{:032b}".format(n)
    r = b[::-1]
    d = int(r, 2)
    return d
