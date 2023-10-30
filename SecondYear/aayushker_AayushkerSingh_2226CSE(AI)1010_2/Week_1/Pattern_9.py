#User function Template for python3

class Solution:
    def printTriangle(self, N):
        # Code here
        for i in range(1, N + 1):
            ab = "*" * (N - i + 1)
            sp = " " * (2 * (i - 1))
            print(ab + sp + ab)

        for i in range(N, 0, -1):
            ab = "*" * (N - i + 1)
            sp = " " * (2 * (i - 1))
            print(ab + sp + ab)


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