class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        h=sorted(heights, reverse=True)
        l=[]
        l1=[]
        for x in h:
            if x in heights:
                l.append(heights.index(x))
        for x in l:
            l1.append(names[x])
        return l1