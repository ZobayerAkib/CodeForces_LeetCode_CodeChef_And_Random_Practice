class Solution:
    def isThree(self, n: int) -> bool:
        c=0
        for x in range(1,n+1):
            if n % x ==0:
                c+=1
    
        return c==3