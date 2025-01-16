class Solution:
    def check(self, time, totalTrips, mid):
        c = 0
        for t in time:
            c += mid // t
        return c >= totalTrips  

   
    def minimumTime(self, time: List[int], totalTrips: int) -> int:
        low = 0
        high = max(time) * totalTrips  
        while high > low + 1:  
            mid = (low + high) // 2  
            if self.check(time, totalTrips, mid):  
                high = mid  
            else:
                low = mid  

        return high  
