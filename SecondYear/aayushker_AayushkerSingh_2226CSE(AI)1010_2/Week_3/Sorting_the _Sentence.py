class Solution:
    def sortSentence(self, s: str) -> str:
        w = s.split()
    
        original_order = [''] * len(w)
        
        for word in w:
            last_char = word[-1]

            if last_char.isdigit():
                index = int(last_char)
                original_order[index - 1] = word[:-1]

        return ' '.join(original_order)