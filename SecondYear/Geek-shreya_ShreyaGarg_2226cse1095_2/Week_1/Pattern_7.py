#User function Template for python3

class Solution:
    def printDiamond(self, N):
        for i in range(1,N+1,1):
            for j in range(0,N-i,1):
                print(" ",end="")
            for k in range(0,i,1):
                print("* ",end="")
            print()
        for i in range(N,0,-1):
            for j in range(0,N-i,1):
                print(" ",end="")
            for k in range(0,i,1):
                print("* ",end="")
            print()

        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ob.printDiamond(N)
# } Driver Code Ends