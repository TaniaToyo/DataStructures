#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} ;
struct node *temp=NULL,*head=NULL;
 

void create()
{
    struct node *newnode;
   
    newnode=malloc(sizeof(struct node));
    printf("\nEnter value: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(head==0)
        temp=head=newnode;
    else
    {
        temp->next=newnode;
        temp=newnode;

    }
    newnode->next=head;
    
}
void del_end()
{
    struct node *current=NULL,*previous=NULL;
    current=head;

    if(temp->next==temp)
        printf("\nList is empty");
    else
    {
        while(current->next!=temp->next)
        {
            previous=current;
            current=current->next;
        }
        previous->next=head;
        temp=previous;
        free(current);
    }
    
    
}

void display()
{   

if(head==0)
    printf("\nList is empty");
else
{   temp=head;
  while(temp->next!=head)
{
    printf("%d\t",temp->data);
    temp=temp->next;
}
printf("%d",temp->data);

}
}


int main()
{
    int choice=1;
    printf("Creation of list: ");
    while(choice==1)
    {
        create();
        display();
        printf("\nDo you want to enter more: ");
        scanf("%d",&choice);
    }
    del_end();
    display();

    
return 0;
}