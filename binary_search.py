
def search(first, last, ele):
    if(first<=last):
        mid=(first+last)//2
        if(l[mid]==ele):
            return mid
        elif l[mid]<ele:
            return search(mid+1,last,ele)
        else:
            return search(first,mid-1,ele)
    else:
        return -1


if __name__=="__main__":
    n=int(input("enter the number of elements: "))
    l=[]
    for i in range(0,n):
        x=int(input())
        l.append(x)
    ele=int(input("enter the search element: "))
    first=0
    last=n-1
    res=search(first,last,ele)
    if res==-1:
        print("element not found")
    else:
        print("element found at position ",res+1)




