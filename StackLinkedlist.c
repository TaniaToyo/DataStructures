#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*newnode=NULL,*temp=NULL;

void create()
{
    newnode=malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if (head==0)
        head=temp=newnode;
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    
}

void insatend()

{   temp=head;
    newnode=malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&newnode->data);
    newnode->next=0;
    while(temp->next!=0)
        temp=temp->next;
    if (head==0)
        head=newnode;
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    
}

void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("\n%d",temp->data);
        temp=temp->next;
    }
}

void del()
{
    temp=head;
    struct node *prevnode;
    while(temp->next!=0)
        {
            prevnode=temp;
            temp=temp->next;
        }
        if (temp==head)
            free(temp);
        else
        {
             free(temp);
        prevnode->next=0;
        temp=prevnode;
    
        }
        
       

}

int main()
{   
    printf("\nCreation of a queue: \n");
    create();
    create();
    printf("\n Queue after entry:\n");
    display();
    printf("\nInserting element at the end:\n");
    insatend();
    display();
    printf("\nDeletion of node:\n ");
    del();
    printf("\nAfter deletion of last node: \n");
    display();
    return 0;
}