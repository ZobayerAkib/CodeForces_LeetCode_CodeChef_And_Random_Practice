class Solution:
    def countPrefixes(self, words: List[str], s: str) -> int:
        c=0
        for x in words:
            if s.startswith(x):
                c+=1
        return c