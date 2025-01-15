class Solution:
    def isArraySpecial(self, nums: List[int]) -> bool:
        if len(nums) ==1:
            return True
        for x in range(1,len(nums)):
            if nums[x]&1 == nums[x-1]&1:
                return False
        return True
            