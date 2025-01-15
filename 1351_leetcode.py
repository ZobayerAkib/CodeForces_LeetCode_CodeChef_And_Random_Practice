class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        grid=([x for sub in grid for x in sub]) #Faltter List or sum(grid,[])
        neg=sum(1 for x in grid if x<0) 
        return neg