class Solution:
    def stableMountains(self, height: List[int], threshold: int) -> List[int]:
        l=[]
        for x in range(1,len(height)):
            if height[x-1] > threshold:
                l.append(x)
        return l