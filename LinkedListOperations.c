#include<stdio.h>
#include<stdlib.h>
void insertatfront();
void deleteatfront();
void insertatend();
void deleteatend();
void insertatposition();
void deleteatposition();
void display();
struct node
{
    int info;
    struct node *link;
};
typedef struct node *NODE;
NODE first=NULL;
NODE temp;
NODE ptr;
NODE prev;
NODE cur;
NODE getnode()
{
    NODE x;
    x=malloc(sizeof(structnode));
    if(x==NULL)
    {
        printf("overflow");
        exit(0);
    }
return x;
}
void insertatfront()
{
    int item;
    NODE temp;
    temp=getnode();
    printf("enter the element to be inserted:\n");
    scanf("%d",&item);
    temp->info=item;
    temp->link=first;
    first=temp;
}
void deleteatfront()
{
    NODE temp;
    temp=first;
    if(first==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=first;
        first=first->link;
        printf("deleted item is %d",temp->info);
        free(temp);
    
    }
}
void insertatend()
{
    int item;
    temp=getnode();
    temp->info=item;
    if(first->link=NULL)
    {
        temp->link=NULL;
        first=temp;
    }
    else
    {
        ptr=first;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        
        }
        temp->link=NULL;
        ptr->link=temp;
    }
}
void deleteatend()
{
    if(first==NULL)
    {
        printf("list is empty:\n");
    }
    else if(first->link==NULL)
    {
        temp=first;
        first=NULL;
        printf("%d was removed:\n",temp->info );
        free(temp);
    }
        else
        {
            prev=NULL;
            cur=first;
            while(cur->link!=NULL)
            {
                prev=cur;
                cur=cur->link;
            }
            temp=cur;
            prev->link=NULL;
            printf("%d was removed:\n",temp->info);
            
            
        }
    
}
void insertatposition()
{
    int item,pos,count=2;
    temp=getnode();
    if(first==NULL)
    {
        temp->link=NULL;
        first=temp;
    }
    else if(pos==1)
    {
        temp->link=first;
        first=temp;
    }
    else
    {
        count=2;
        ptr=first;
        while(count<pos-1)
        {
            ptr=ptr->link;
            ptr->link=temp;
        
        }
    }
}
void deleteatposition()
{
    int pos,count;
    if(first==NULL)
    {
        printf("list is empty\n");
    }
    else if(first->link==NULL)
    {
        temp=first;
        first=NULL;
        printf("%d was removed\n",temp->info);
        free(temp);
    }
    else
    {
        ptr=first;
        if(pos==1)
        {
            temp=first;
            first=first->link;
            printf("%d was removed\n",temp->info);
            free(temp);
        }
        else
        {
            count=2;
            prev=NULL;
            cur=first;
            while(count<=pos)
            {
                prev=cur;
                cur=cur->link;
                count++;
            
            }
            prev->link=cur->link;
            temp=cur;
            printf("%d was removed\n",temp->info);
            free(temp);
            
        }
    }
    
}
void display()
{
    NODE ptr=first;
    while(ptr!=NULL)
    {
        printf("%d",ptr->info);
        ptr=ptr->link;
        printf("\n");
    }
}
void main()
{
    int op,item,pos;
    do{
        printf("1. insertatfront\n 2. deleteatfront\n 3.insertatend\n 4.deleteatend\n 5.insertatposition\n 6. deleteatpositio\n 7. display\n");
        printf("enter option\n");
        scanf("%d", &op);
        switch(op)
        {
            case 1:printf("enter item to be inserted");
                   scanf("%d",&item);
                    insertatfront();
            break;
            case 2:deleteatfront();
            break;
            case 3:printf("enter the item to inserted:\n");
                   scanf("%d",&item);
                   insertatend();
                   break;
            case 4:deleteatend();
            break;
            case 5:printf("enter the element to inserted\n");
                   scanf("%d",&item);
                   printf("enter the position\n");
                   scanf("%d",&pos);
                   insertatposition();
                   break;
            case 6:printf("enter the position\n");
                   scanf("%d",&pos);
                   deleteatposition();
                   break;
            case 7:display();
            case 8:exit(0);
            default:printf("invalid option\n");
        }
        
    }while(op!=9);
}
