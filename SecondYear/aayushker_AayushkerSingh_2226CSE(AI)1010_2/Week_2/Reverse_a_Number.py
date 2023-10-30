def reverseBits(n):
    # Write your code here.
    binno = bin(n)[2:]
    binno = binno.zfill(32)
    rev = binno[::-1]
    dec_rev = int(rev, 2)
    return dec_rev

