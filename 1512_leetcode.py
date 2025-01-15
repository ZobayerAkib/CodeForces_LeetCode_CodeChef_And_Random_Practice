class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        c=0
        for x in range(0,len(nums)):
            for y in range(x,len(nums)):
                if nums[x]==nums[y] and x<y :
                    c+=1
        return c