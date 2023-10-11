class Solution:
    def Sq(self, N):
        for _ in range(N):
            print("* " * N)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        obj = Solution()
        obj.Sq(N)