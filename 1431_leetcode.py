class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        l=[]
        for x in candies:
            if x+extraCandies >= max(candies):
                l.append(True) 
            else:
                l.append(False)
        return l