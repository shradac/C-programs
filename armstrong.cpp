#include<iostream>
#include<math.h>
using namespace std;
int arm(int n);
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    arm(n);
}
int arm(int n)
{
    int sum=0,r,temp,count;
    string c = to_string(n);
    count= c.size();
    cout<<count<<"\n";
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(pow(r,count));
        cout<<sum<<"\n";
        n=n/10;
        cout<<n<<"\n";
    }
    if(temp==sum)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<"not an armstrong";
    }
    return 0;
}
