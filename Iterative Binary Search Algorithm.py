#bianry search
def binarySearch(arr,l,h,n):
    while (l<=h):
        mid=l+(h-l//2)
        if arr[mid]==n:
            return mid
        elif arr[mid]<n:
            l=mid+1
        else:
            h=mid-1
    return -1
if __name__ == '__main__':
    arr=[-100,-2,-1,5,25,1200,1225]
    l=0
    h=len(arr)-1
    n=100
    bs=binarySearch(arr,l,h,n)
    if bs != -1:
        print(f"{n} is found at the index {bs}")
    else:
        print("not found")

