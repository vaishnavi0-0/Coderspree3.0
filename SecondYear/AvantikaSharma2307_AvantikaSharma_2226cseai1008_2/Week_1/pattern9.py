#User function Template for python3

class Solution:
    def printTriangle(self, N):
        for l in range(1,N+1,1):
            for a in range(1,N+1,1):
                if a<=(N+1-l):
                    print("*",end="")
                else:
                    print(" ",end="")
            for b in range(1,N+1,1):
                if b<l:
                    print(" ",end="")
                else:
                    print("*",end="")
                
            print()      
        for i in range(1,N+1,1):
            for j in range(1,N+1,1):
                if j<=i:
                    print("*",end="")
                else:
                    print(" ",end="")
            for k in range(1,N+1,1):
                if k>=(N+1-i):
                    print("*",end="")
                else:
                    print(" ",end="")
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