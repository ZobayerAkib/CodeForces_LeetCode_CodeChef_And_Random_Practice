 
startTime = [4] 
endTime = [4] 
queryTime = 4
c=0
for x,y in zip(startTime,endTime):
    if x <= queryTime <= y:
        c+=1
print(c)
        
        
        


