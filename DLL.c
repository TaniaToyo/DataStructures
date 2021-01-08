#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;

};
struct node *head, *newnode, *tail ,*temp;
void create()
{   
    newnode=malloc(sizeof(struct node));
    printf("\nEnter element: ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==0)
       {

       tail=head=newnode;
       }
    else
    {
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;

    }
    

}
void display()
{   struct node *temp;
temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void del_end()
{   struct node *temp;
    if(tail==0)
    {
        printf("List is empty");
    }
    else{
        temp=tail;
        temp->prev->next=0;
    
    tail=tail->prev;
    free(temp);
    }

    
}
int main()
{   printf("\nCreation of new list\n");
    create();
    create();
    create();
    create();
    printf("\nDeletion of the last element\n");
    del_end();
    display();
    return 0;
}