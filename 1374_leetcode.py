class Solution:
    def generateTheString(self, n: int) -> str:
        
        if n%2==0:
            return (n-1)*('a')+1*('b')
        else:
            return n*('a')