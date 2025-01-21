from collections import Counter
class Solution:
    def rearrangeCharacters(self, s: str, target: str) -> int:
        l=[]
        freq=Counter(s)
        freq1=Counter(target)
        result = float('inf')

        for char, count in freq1.items():
            if char in freq:        
                result = min(result, freq[char] // count)
            else:
                return 0

        return result
