from typing import List

class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        n = len(nums)
        res = float('inf')
        arr = [[0] * 4 for _ in range(n)]
        i = 0
        
        for num in nums:
            arr[i][num] += 1
            i += 1
        
        for f in range(1, n):
            arr[f][1] += arr[f-1][1]
            arr[f][2] += arr[f-1][2]
            arr[f][3] += arr[f-1][3]
        
        for i in range(-1, n):
            toone = 0
            if i >= 0:
                toone = arr[i][2] + arr[i][3]
            
            for j in range(i, n):
                totwo, tothree = 0, 0
                
                if j >= 0 and i < n - 1:
                    totwo = (arr[j][1] - (0 if i == -1 else arr[i][1])) + (arr[j][3] - (0 if i == -1 else arr[i][3]))
                
                if i < n - 2:
                    tothree = (arr[n-1][1] - (0 if j == -1 else arr[j][1])) + (arr[n-1][2] - (0 if j == -1 else arr[j][2]))
                
                res = min(res, toone + totwo + tothree)
        
        return min(res, arr[n-1][1] + arr[n-1][2])
