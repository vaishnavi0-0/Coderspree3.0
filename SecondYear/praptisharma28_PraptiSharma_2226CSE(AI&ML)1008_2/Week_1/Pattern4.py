class Solution:
    def Triangle(self, N):
        for i in range(1, N + 1):
            for j in range(1, i + 1):
                print(i, end=" ")
            print()

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        obj = Solution()
        obj.Triangle(N)
