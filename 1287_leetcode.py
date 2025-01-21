from collections import Counter
class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        s=Counter(arr)
        l=0
        totalSum=sum(x for x in s.values())
        for x,y in s.items():
            if (y/totalSum)*100 >= 25:
                l=x
        return l
