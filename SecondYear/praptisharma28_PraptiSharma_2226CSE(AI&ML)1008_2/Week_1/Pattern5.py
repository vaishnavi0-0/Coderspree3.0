class Solution:
    def Triangle(self, N):
        for i in range(N, 0, -1):
            print("* " * i)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        obj = Solution()
        obj.Triangle(N)
