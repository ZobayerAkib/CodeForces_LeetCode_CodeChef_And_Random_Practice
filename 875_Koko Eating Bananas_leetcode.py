class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        
        def can_finish(k):
            time = 0
            for pile in piles:
                time += (pile + k - 1) // k  
            return time <= h
        
        # Binary search for the minimum k
        low, high = 1, max(piles)  
        
        while low < high:
            mid = (low + high) // 2
            if can_finish(mid):
                high = mid
            else:
                low = mid + 1  
        
        return low
