 
sentence = "hellohello hellohellohello"
searchWord = "ell"
sentence=sentence.split(' ')
for x,y in enumerate(sentence):
    if y.startswith(searchWord):
       return x+1
         break
return -1
        
        
        


