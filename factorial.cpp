#include<iostream>
using namespace std;
long int fact(int n);
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    printf("the factorial of %d = %ld ",n,fact(n));

}
long int fact(int n)
{
    if(n>=1)
    {
        return(n*fact(n-1));
    }
    else{
        return 1;
    }
}
