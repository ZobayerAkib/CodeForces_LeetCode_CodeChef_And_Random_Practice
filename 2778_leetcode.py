class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        l=[]
        for x in range(1,len(nums)+1):
            if len(nums) % x == 0:
                l.append(nums[x-1])

        return sum(x*x for x in l)        