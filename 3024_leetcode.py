class Solution:
    def triangleType(self, nums: List[int]) -> str:
        x=sorted(nums)
        if x[0]+x[1]>x[2] and len(set(nums))==1:
            return "equilateral"
        elif x[0]+x[1]>x[2]  and len(set(nums))==3:
             return "scalene"
        elif x[0]+x[1]>x[2]  and len(set(nums))==2:
            return "isosceles"
        else:
            return "none"