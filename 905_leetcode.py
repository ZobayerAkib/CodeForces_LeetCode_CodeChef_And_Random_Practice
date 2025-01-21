class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        l=[]
        l1=[]
        for x in nums:
            if x%2==0:
                l.append(x)
            else:
                l1.append(x)
        return l+l1