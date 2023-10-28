class Solution:
    def Triangle(self, N):
        for i in range(1, N + 1):
            print(" " * (N - i), end="")
            print("*" * (2 * i - 1))

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        obj = Solution()
        obj.Triangle(N)
