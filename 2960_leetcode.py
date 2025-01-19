class Solution:
    def countTestedDevices(self, batteryPercentages: List[int]) -> int:
        d=0 
        for x in batteryPercentages:
            if x > d :
                d=d+1
           
        return d