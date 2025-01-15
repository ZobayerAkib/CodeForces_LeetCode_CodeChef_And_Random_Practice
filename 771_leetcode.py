class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        c=0
        for x in jewels:
            for y in stones:
                if y==x:
                    c+=1

        return c