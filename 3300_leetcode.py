class Solution:
    def minElement(self, nums: List[int]) -> int:
        d=[]
        for num in nums:
            d.append(sum(int(x) for x in str(num)))
        return min(d)
        
#method 2
# s = [sum(map(int, str(num))) for num in nums]
# print(min(s))