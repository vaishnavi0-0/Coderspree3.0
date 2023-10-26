class Solution:
    def T(self, N):
        for i in range(1, N + 1):
            for j in range(1, i + 1):
                print(j, end=" ")
            print()

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ob.T(N)
