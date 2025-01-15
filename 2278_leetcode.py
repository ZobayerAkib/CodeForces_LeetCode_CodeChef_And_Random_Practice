from collections import Counter
class Solution:
    def percentageLetter(self, s: str, letter: str) -> int:
        
        freq=Counter(s)
        s=sum(x for x in freq.values())
        return (freq[letter]* 100) // s

