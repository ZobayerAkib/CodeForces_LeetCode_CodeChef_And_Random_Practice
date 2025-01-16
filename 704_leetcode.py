class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        def binarySearch(a,h,l,x):
            mid=(l+h)//2
            if l<=h:
                if a[mid]==x:
                    return mid
                elif a[mid]<x :
                    return binarySearch(a,h,mid+1,x)
                else:
                    return binarySearch(a,mid-1,l,x)
            return -1

        l,h=0,len(nums)-1
        bs=binarySearch(nums,h,l,target)
        if bs>-1:
            return bs
        else:
            return (-1)
            
            