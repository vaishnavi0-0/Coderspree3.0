from typing import *

def compare(a: int, b: int) -> str:
    comparison_result = {
        a == b: 'equal',
        a > b: 'greater',
        a < b: 'smaller'
    }
    return comparison_result[True]

print(compare(3, 8))   
