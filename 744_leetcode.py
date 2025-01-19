class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        l=[]
        for x in letters:
            if ord(x) > ord(target) :
                l.append(ord(x))
        if not l: 
            return letters[0]
                
        return  chr(min(l))