class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        s=sorted(nums)
        l=[]
        for x in nums:
            l.append(s.index(x))
        return l
