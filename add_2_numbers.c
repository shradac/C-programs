#include<stdio.h>
int sum(int a,int b, int *add)
{
    *add=a+b;
}
int input(int *a,int *b)
{
    printf("enter two numbers: ");
    scanf("%d%d",a,b);
    printf("%d %d\n",*a,*b);    
}
int output(int add)
{
    printf("%d",add);
}
void main()
{
    int a,b,c;
    input(&a,&b);
    sum(a,b,&c);
    printf("a = %d and b = %d \n",a,b);
    output(c);
}
