class Solution:
    def D(self, N):
        for i in range(1, N + 1):
            print(" " * (N - i), end="")
            print("* " * i)

        for i in range(N - 1, 0, -1):
            print(" " * (N - i), end="")
            print("* " * i)

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        obj = Solution()
        obj.D(N)
