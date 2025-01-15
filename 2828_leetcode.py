class Solution:
    def isAcronym(self, words: List[str], s: str) -> bool:
        l=[]
        for x in words:
            l.append(x[0])
        if(''.join(l)== s):
            return True
        else:
            return False