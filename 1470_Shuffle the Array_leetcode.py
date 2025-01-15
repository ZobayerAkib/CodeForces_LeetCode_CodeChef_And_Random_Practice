 
# Input: nums = [2,5,1,3,4,7], n = 3
# Output: [2,3,5,4,1,7] 
nums = [2,5,1,3,4,7]
n = 3
s=[[nums[x],nums[x+n]] for x in range(0,n)]
s1=sum(s, [])
print(s1)


