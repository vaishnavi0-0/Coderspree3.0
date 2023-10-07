class Solution:
    def printTriangle(self, N):
        # Code here
        for i in range(1,N+1,1):
            for j in range(1,(N+2)-i,1):
                print("*",end=" ")
            print()    

