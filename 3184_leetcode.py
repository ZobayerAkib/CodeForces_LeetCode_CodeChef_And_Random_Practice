class Solution:
    def countCompleteDayPairs(self, hours: List[int]) -> int:
        c=0
        for x in range(0,len(hours)):
            for y in range (x,len(hours)):
                if (y>x) and ((hours[x] + hours[y]) % 24 ==0):
                    c+=1
                    
        
        return c