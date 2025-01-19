class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        total=0
        end=start+2*n
        for x in range(start, end, 2):
            total=total^x
        return total