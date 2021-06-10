#include<stdio.h>
long int fact(int n);
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("the factorial of %d = %ld",n,fact(n));
}
long int fact(int n)
{
    if(n>=1)
    {
        return(n*fact(n-1));
    }
    else
    {
        return 1;
    }
}
/*WITHOUT RECURSION 
#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("the factorial of negative numbers do not exist");
    }
    for(i=1;i<n+1;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}*/
