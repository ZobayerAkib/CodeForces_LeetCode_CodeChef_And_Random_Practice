class Solution:
    def findIndices(self, nums: List[int], indexDifference: int, valueDifference: int) -> List[int]:
        for x in range(0,len(nums)):
            for y in range(x, len(nums)):
                if abs(nums[x]-nums[y]) >= valueDifference and abs(x-y) >=indexDifference:
                    return(x,y)
        return(-1,-1)



