class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        l=[]
        for i,word in enumerate(words):
            if x in word:
                l.append(i) 
        return l