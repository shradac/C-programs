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
NODE new;
NODE ptr;
NODE prev;
NODE cur;

NODE getnode()
{
    NODE x;
    x=malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("overflow");
        exit(0);
    }
return x;
}
void insertatfront()
{
    temp=getnode();
    int item;
    printf("enter the element to be inserted:\n");
    scanf("%d",&item);
    temp->info=item;
    temp->link=first;
    first=temp;
}
void deleteatfront()
{
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
    printf("enter the item to be inserted:\n");
    scanf("%d",&item);
    temp=getnode();
    temp->info = item;
    if(first == NULL)
    {
    first = temp;
    }
    else
    {
    ptr = first;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    temp->link = NULL;
    ptr->link = temp;
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
    int item,pos,count=1;
    printf("enter the element to inserted\n");
    scanf("%d",&item);
    printf("enter the position\n");
    scanf("%d",&pos);
    temp=getnode();
    temp->info = item;
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
        while(count<pos)
        {
            ptr = ptr->link;
            count++;
        }
        temp->link = ptr->link;
        ptr->link = temp;

    }
}
void deleteatposition()
{
    int pos,count;
    printf("enter the position to delete");
    scanf("%d",&pos);
    if(first==NULL)
    {
        printf("list is empty \n");
    }
    else if(first->link==NULL)
    {
        temp=first;
        first=NULL;
        printf("%d was removed \n",temp->info);
    }
    else
    {
        count=2;
        cur=first;
        while(count<=pos)
        {
            prev=cur;
            cur=cur->link;
            count++;
        }
        prev->link=cur->link;
        temp=cur;
        printf("%d was removed \n",temp->info);
        free(temp);
    }
   
}
void display()
{
    ptr=first;
    while(ptr!=NULL)
    {
        printf("%d",ptr->info);
        ptr=ptr->link;
    }
}
void main()
{
    int op,item,pos,choice;
    do{
        printf("1.Insert 2.Delete 3.Display 4.Exit\n");
        printf("enter option\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: printf("1.Insert at front 2.Insert at end 3.Insert at position");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1: insertatfront();
            break;
            case 2: insertatend();
            break;
            case 3: insertatposition();
            break;
            }
            break;
            case 2: printf("1.Delete at front 2.Delete at end 3.Delete at position");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1: deleteatfront();
            break;
            case 2: deleteatend();
            break;
            case 3: deleteatposition();
            break;
            }
            break;
            case 3: display();
            break;
            case 4: exit(0);
        }
       
    }while(op!=5);
}

