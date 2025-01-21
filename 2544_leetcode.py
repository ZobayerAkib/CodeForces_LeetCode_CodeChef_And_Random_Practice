class Solution:
    def alternateDigitSum(self, n: int) -> int:
        s=0
        for x,y in enumerate(str(n)):
            if int(x) %2==0:
                s+=int(y)
            else:
                s-=int(y)
        return s