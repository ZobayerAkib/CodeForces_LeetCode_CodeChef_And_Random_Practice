class Solution:
    def checkTwoChessboards(self, coordinate1: str, coordinate2: str) -> bool:
        d={'a':1,'b':2,'c':3,'d':4,'e':5,'f':6,'g':7,'h':8}
        value1 = d.get(coordinate1[0], 0)  
        value2 = d.get(coordinate2[0], 0) 
        
        total = value1 + value2 + int(coordinate1[1]) + int(coordinate2[1])
    
        return total % 2 == 0
            