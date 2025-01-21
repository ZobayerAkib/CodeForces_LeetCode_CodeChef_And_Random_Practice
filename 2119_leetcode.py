class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        n=str(num)
        n2=int(n[::-1])
        n3=str(n2)
        n4=int(n3[::-1])
        if num==n4:
            return True
        return False
