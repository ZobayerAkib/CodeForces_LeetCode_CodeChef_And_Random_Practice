class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        arr.sort()
        diff=arr[1]-arr[0]
        for x in range(0,len(arr)-1):
            if arr[x+1]-arr[x] != diff:
               return False
        return True
        