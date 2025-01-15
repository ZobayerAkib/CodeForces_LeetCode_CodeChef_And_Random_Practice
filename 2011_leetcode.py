class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        y=0
        for x in operations:
            if x.startswith('+') or x.endswith('+'):
                y+=1
            else:
                y-=1
        
        return y