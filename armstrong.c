#include<stdio.h>
int input(int *n)
{
    printf("enter the number: ");
    scanf("%d",n);
}
int check(int n,int *flag)
{
    int r,sum=0;
    int temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        *flag=1;
    }
}
int output(int flag)
{
    if(flag)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
}
void main()
{
    int n,flag=0;
    input(&n);
    check(n,&flag);
    output(flag);
}
