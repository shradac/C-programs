#include<iostream>
using namespace std;
int search(int a[ ],int first,int last,int ele);
int main()
{
    int n,a[100],first,last,ele,result;
    cout<<"enter the number of elements: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the search element: ";
    cin>>ele;
    first=0;
    last=n-1;
    result=search(a,first,last,ele);
    if(result==-1)
    {
        cout<<"element not found";
    }
    else{
        cout<<"element found at position "<<result+1;
    }

}
int search(int a[ ],int first,int last,int ele)
{
    int mid;
    if(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==ele)
        {
            return mid;
        }
        else if(a[mid]<ele)
        {
            return search(a,mid+1,last,ele);
        }
        else{
            return search(a,first,mid-1,ele);
        }
    }
    else
        return -1;
}
