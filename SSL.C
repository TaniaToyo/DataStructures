#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *link;
}*save,*top,*temp;

struct Node* add_at_end(struct Node *ptr,int n)
{
    Node *temp;
   
    temp=(struct Node *)malloc(sizeof(struct Node));

    temp->data=n;
    temp->link=NULL;
    ptr->link=temp;
    return temp;

}

void display(struct Node *head)
{

    printf("\n\tThe elements of the list are: \n");
    for(int i =0;i<4;i++)
    {
        printf("%d\n",head->data);
        head=head->link;
    }
}
struct Node *deque(struct Node *head,int position)
{
    struct Node *current= head; //To point the current node
    struct Node *previous=head; //To point the previous node
    
    if (head->link==NULL)
    { 
        printf("List is empty");
    }
    else if (position==1) //If the pos is the begining itself
    {   
        head=head->link; //move the head pointer to the next element
        free(current);
                        // free the current element. cuz both the current and head at initial stage will point the same place
        current=NULL;
        return head;
    } 
    else
    {  
        {   //To iterate till the postion
            while(position!=1)
            {
                previous=current; //Uptate the previous to the next pos
                current=current->link; // The add to the next node is in current link.
                position--; //Say the pos is 3, after 2 position-- it will become 1
            }
            
            previous->link=current->link; //Updating the previous node to the next next node
            free(current);
            current=NULL;
            return head;
        }
    }
    
   
    
}



int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data=0;
    head->link=NULL;
    
    struct Node *ptr=head;
    for(int i=0;i<3;i++)
    {   printf("Enter element: ");
        int ele;
        scanf("%d",&ele);
        ptr=add_at_end(ptr,ele);
    }
    ptr=head;
    display(ptr);
    ptr=head;
    printf("\nAfter deletion\n");
    ptr=deque(ptr,3);
  
    display(ptr);
    
}