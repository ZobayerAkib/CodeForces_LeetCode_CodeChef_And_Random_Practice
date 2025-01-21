class Solution:
    def getEncryptedString(self, s: str, k: int) -> str:
        new_s = ""
        for x in range(len(s)):
            new_index = (x + k) % len(s) 
            new_s += s[new_index]
        return new_s