#User function Template for python3

class Solution:
    
    #Function to merge the arrays.
    def merge(self,arr1,arr2,n,m):
        #code here
        
        i,j =0,0
    
        while i < n and j < m:
            if arr1[i] <= arr2[j]:
                i += 1
            else:
                for k in range(n - 1, i, -1):
                    arr1[k] = arr1[k - 1]
                arr1[i] = arr2[j]
                j += 1
                n += 1

        while j < m:
            arr1[n] = arr2[j]
            j += 1
            n += 1
        return arr1







    



#{ 
 # Driver Code Starts
#Initial template for Python

if __name__ == '__main__':
    t = int(input())
    for tt in range(t):
        n,m = map(int, input().strip().split())
        arr1 = list(map(int, input().strip().split()))
        arr2 = list(map(int, input().strip().split()))
        ob=Solution()
        ob.merge(arr1, arr2, n, m)
        print(*arr1,end=" ")
        print(*arr2)
# } Driver Code Ends