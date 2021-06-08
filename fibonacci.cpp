#include<iostream>
using namespace std;
int fibo(int n);
int main()
{
    int n;
    cin>>n;
    fibo(n);
}
int fibo(int n)
{
    int f=0,s=1,t;
    cout<<f<<" "<<s<<" ";
    for(int i=2;i<n;i++)
    {
        t=f+s;
        cout<<t<<" ";
        f=s;
        s=t;
    }
    return 0;
}
