class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        current_max = current_min = mp = nums[0]
        for x in nums[1:]:
            if x < 0:
                current_max, current_min = current_min, current_max
        
            current_max = max(x, current_max * x)
            current_min = min(x, current_min * x)
            mp = max(mp, current_max)
        return mp