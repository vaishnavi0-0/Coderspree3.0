#User function Template for python3

class Solution:
    def printTriangle(self, N):
        for i in range(1,N+1):
            k=1
            for j in range(1,N+1):
            
                if j<=i:
                    print(k,"",end="")
                    k=k+1
                else:
                    print(" ",end="")
            k=k-1
            for l in range(1,N+1):
                if l>=(N+1-i):
                    print(k,"",end="")
                    k=k-1
                else:
                    print("   ",end="")
                    
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