#include<iostream>
using namespace std;
int palindrome(int n);
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    palindrome(n);

}
int palindrome(int n)
{
    int temp,remainder,revn=0;
    temp=n;
    while(n!=0)
    {
        remainder=n%10;
        revn=revn*10+remainder;
        n=n/10;
    }
    if(temp==revn)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not a palindrome";
    }
    
}
