from typing import List

def print(x: int) -> List[int]:
    i = 1
    result = []
    
    for i in range(1, x + 1):
        result.append(i)
    
    return result
