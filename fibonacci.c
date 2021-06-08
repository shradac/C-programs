#include<stdio.h>
void main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    fibo(n);
}
int fibo(int n)
{
    int first=0,second=1,third;
    printf("%d %d ",first,second);
    for(int i=2;i<n;i++)
    {
        third=first+second;
        printf(" %d ",third);
        first=second;
        second=third;
    }  
}
