from typing import List

def genFibNums(n: int) -> List[int]:
    if n <= 0:
        return [0]
    elif n == 1:
        return [0]
    
    seq = [0, 1]
    
    while len(seq) < n:
        next = seq[-1] + seq[-2]
        seq.append(next)
    
    return seq
