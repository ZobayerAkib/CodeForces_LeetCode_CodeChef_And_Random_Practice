import math
class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        x=math.gcd(a,b)
        c=0
        for i in range(1,x+1):
            if x%i==0:
                c+=1
        return c