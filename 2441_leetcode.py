class Solution:
    def findMaxK(self, nums: List[int]) -> int:
       
        num_set = frozenset(nums)
        ans = 0
        for num in num_set:
            if -num in num_set and num != 0:  
                ans = max(ans, abs(num))  

        return ans if ans!=0 else -1

            