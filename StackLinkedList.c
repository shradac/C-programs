#include<stdio.h>
#include<stdlib.h>
#define size 10
struct node
{
    int info;
    struct node *link;
};
typedef struct node* NODE;
NODE TOP=NULL;
int c=0;
NODE ptr;
NODE temp;

NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}
void push()
{
    int item;
    printf("Enter the item to be inserted:\n");
    scanf("%d",&item);
    NODE temp;
    temp=getnode();
    if(c==size)
    {
        printf("Overflow\n");
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
    temp=TOP;
    if(TOP==NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Deleted item is %d\n",TOP->info);
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
        printf("%d ",TOP->info);
        TOP=TOP->link;
    }printf("\n");
}
void main()
{
    int op,item;
    do
    {
        int item;
        printf("1.Push 2.Pop 3.Display 4.Exit\n");
        printf("Enter option\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4:exit(0);
            default:printf("Wrong option");
        }
    }
    while(op!=4);
}

     
