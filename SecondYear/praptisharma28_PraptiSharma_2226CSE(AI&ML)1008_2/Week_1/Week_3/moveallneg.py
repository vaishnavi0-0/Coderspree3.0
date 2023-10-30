class Solution:
    def segregateElements(self, arr, n):
        positive = [x for x in arr if x >= 0]
        negative = [x for x in arr if x < 0]

        for i in range(n):
            if i < len(positive):
                arr[i] = positive[i]
            else:
                arr[i] = negative[i - len(positive)]
