from collections import Counter
class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        d=0
        c=Counter(nums)
        for x,y in c.items() :
            if y>=2:
                d=d^x
        
        return d