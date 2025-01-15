class Solution:
    def scoreOfString(self, s: str) -> int:
        sum=0
        for x in range(1,len(s)):
                sum+=abs(ord(s[x]) - ord(s[x-1]))
        return sum