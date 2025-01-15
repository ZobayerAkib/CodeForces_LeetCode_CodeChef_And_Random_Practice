class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        s=sum(x for x in nums if x < 10)
        s2=sum(x for x in nums if x >= 10)
        return s!=s2
