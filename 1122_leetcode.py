from collections import Counter 
class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        freq=Counter(arr1)
        l=[]
        k=[]
        for x in arr2:
            if x in freq:
                l.extend([x]*freq[x])
        for x in freq:
            if x not in arr2:
                k.extend([x] * freq[x])     

       
        return l+sorted(k)
            

