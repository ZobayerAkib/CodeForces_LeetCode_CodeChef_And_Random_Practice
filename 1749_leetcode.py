class Solution:
    def maxAbsoluteSum(self, nums: List[int]) -> int:
        l=list(accumulate(nums,initial=0))
        return max(l)-min(l)