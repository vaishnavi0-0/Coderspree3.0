#User function Template for python3

class Solution:
    def printTriangle(self, N):
        for i in range(1,N+1):
            for j in range(1,N+1,1):
                if(j<=i):
                    print(j,end=" ")
                else:
                    print(" ",end=" ")
                   
            for k in range(N+1,1,-1):
                if(k>i+1):
                    print(" ",end=" ")
                else:
                    print(k-1,end=" ")
            print()

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input().strip())
        ob = Solution()
        ob.printTriangle(N)
# } Driver Code Ends