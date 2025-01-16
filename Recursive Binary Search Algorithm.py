#Recursive Binary Search Algorithm:
def binarySearch(arr,l,h,n):
    if h >= l:
        mid= l + (h-l) //  2
        if arr[mid] == n:
           return mid
        elif arr[mid] > n:
            return binarySearch(arr,l,mid-1,n)
        else:
            return binarySearch(arr,mid+1,h,n)
    return -1
if __name__ == '__main__':
    arr=[25,1200,-100,-2,-1,5,1225]
    arr.sort() # because binarySearch only can performed at sorted array
    l=0
    h=len(arr)-1
    n=1225
    bs=binarySearch(arr,l,h,n)
    if bs != -1:
        print(f"{n} is found at the index {bs}")
    else:
        print("not found")

