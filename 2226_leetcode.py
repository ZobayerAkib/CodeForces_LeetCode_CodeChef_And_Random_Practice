class Solution:
    def maximumCandies(self, candies: List[int], k: int) -> int:
        
        def can_allocate(mid):
            count = 0
            for candy in candies:
                count += candy // mid  
            return count >= k  

        low, high = 1, max(candies)  

        while low <= high:
            mid = (low + high) // 2  
            if can_allocate(mid):  
                low = mid + 1
            else:  
                high = mid - 1
        
        return high  
