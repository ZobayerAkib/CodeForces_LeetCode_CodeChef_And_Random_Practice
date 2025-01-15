import math
class Solution:
    def findGCD(self, nums: List[int]) -> int:
        nums=sorted(nums)
        return math.gcd(nums[0],nums[len(nums)-1])