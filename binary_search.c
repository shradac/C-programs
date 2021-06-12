//BINARY SEARCH USING RECURSION

#include<stdio.h>
int binary(int a[ ],int first,int last, int ele);
int main()
{
    int n,ele,a[100],first,last,result;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d",&ele);
    first=0;last=n-1;
    result=binary(a,first,last,ele);
    if(result==-1)
    {
        printf("element not found");
    }
    else{
        printf("element found at position %d",result+1);
    }
    
   
}
int binary(int a[ ],int first,int last, int ele)
{
    int mid;
    mid=(first+last)/2;
    if(a[mid]==ele)
    {
        return mid;
    }
    else if(ele<a[mid])
    {
        return binary(a, first, mid - 1, ele);
    }
    else
    {
        return binary(a, mid+1, last, ele);
    }
    return -1;
}
