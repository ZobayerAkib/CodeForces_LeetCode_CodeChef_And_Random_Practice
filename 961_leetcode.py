from collections import Counter
class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        s=len(set(nums))-1
        freq=Counter(nums)
        for x,y in freq.items():
            if s==y:
                return x
