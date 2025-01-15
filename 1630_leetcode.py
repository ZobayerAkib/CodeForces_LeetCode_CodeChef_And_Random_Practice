class Solution:
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        def is_seq(num):
            num.sort()
            diff=num[1]-num[0]
            for x in range(0,len(num)-1):
                if num[x+1]-num[x] != diff:
                    return False
            return True

        b=[]   
        for x in range(len(l)):
            b.append(is_seq(nums[l[x]:r[x]+1]))
            
        return b

        
        
        