#include<stdio.h>
int palindrome(int n);
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
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
    if(revn==temp)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
}
