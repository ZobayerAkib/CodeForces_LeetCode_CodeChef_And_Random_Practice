class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        nums= sorted(nums)
        l=[]
        for x in range(len(nums)):
            if nums[x] == target:
                l.append(x)
                    
        return l
                