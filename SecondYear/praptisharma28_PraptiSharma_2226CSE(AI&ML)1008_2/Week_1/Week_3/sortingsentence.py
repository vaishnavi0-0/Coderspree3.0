class Solution:
    def sortSentence(self, s: str) -> str:
        words = s.split()

        originalWords = [None] * len(words)

        for word in words:
            index = int(word[-1]) - 1
            originalWords[index] = word[:-1]

        originalSentence = " ".join(originalWords)

        return originalSentence
