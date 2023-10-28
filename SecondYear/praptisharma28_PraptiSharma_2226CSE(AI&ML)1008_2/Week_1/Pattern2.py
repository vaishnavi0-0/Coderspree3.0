class Solution:
    def printT(self, N):
        for i in range(N):
            print("* " * (i + 1))

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ob.printT(N)
