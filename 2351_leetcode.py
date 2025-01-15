class Solution:
    def repeatedCharacter(self, s: str) -> str:
        l=""
        c=""
        for x in s:
            if x in l:
                c=x
                break  
            else:
                l+=x
        return c