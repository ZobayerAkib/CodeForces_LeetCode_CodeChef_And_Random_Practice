class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        s=sum(int(x) for x in str(n))
        p=prod(int(x) for x in str(n))
        return p-s