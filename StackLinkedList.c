#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;
NODE TOP=NULL;
int c=0,size=4;
NODE ptr;
NODE temp;
NODE getnode()
{
    int x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("out of memory");
        exit(0);
    }
    return x;
}
void push()
{
    int item;
    NODE temp;
    temp=getnode();
    if(c==size)
    {
        printf("overflow");
    }
    else
    {
        temp->info=item;
        temp->link=TOP;
        TOP=temp;
        c++;
    }
}
void pop()
{
    NODE temp;
    temp=TOP;
    if(TOP==NULL)
    {
        printf("underflow");
    }
    else
    {
        printf("deleted item is %d",TOP->info);
        temp=TOP;
        TOP=TOP->link;
        free(temp);
        c--;
    }
}
void display()
{
    ptr=TOP;
    while(TOP!=NULL)
    {
        printf("%d",TOP->info);
        TOP=TOP->link;
    }
}
void main()
{
    int op,item;
    do
    {
        int item;
        printf("1.push\n 2.pop\n3.display\n");
        printf("enter option");
        scanf("%d",&op);
        switch(op)
        {
            case 1: printf("enter the item to be inserted");
                    scanf("%d",&item);
                    push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
        }
    }
    while(op!=4);
}
        
     
