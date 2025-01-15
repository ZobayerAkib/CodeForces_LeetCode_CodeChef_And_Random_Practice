class Solution:
    def averageValue(self, nums: List[int]) -> int:

        l=[x for x in nums if x % 6 == 0]
        if len(l) == 0:
            return 0
        else:
            return sum(l)//len(l) 