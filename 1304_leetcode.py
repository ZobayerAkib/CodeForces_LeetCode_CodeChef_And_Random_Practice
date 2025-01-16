class Solution:
    def sumZero(self, n: int) -> List[int]:
        
        l=[]   


        if(n%2==0):
            for i in range((-n//2), n-(n//2-1)):
                if i!=0:
                    l.append(i)
                
        else:
            for i in range((-n//2+1), n-(n//2)):
                l.append(i)  
        return l