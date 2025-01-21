class Solution:
    def isBalanced(self, num: str) -> bool:
        sumEven=0
        sumOdd=0
        for x in range(len(num)):
            if int(x) % 2 == 0:
                sumEven+=int(num[x])
            else:
                sumOdd+=int(num[x])
        
        if sumEven==sumOdd:
            return True
        else:
            return False
