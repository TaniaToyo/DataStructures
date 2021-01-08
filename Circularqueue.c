#include <stdio.h>
int choice =0;
#define SIZE 5
 
int items[SIZE];
int front = -1, rear = -1;
 
// Check if the queue is full
int isFull() {
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
 
  return 1;
  return 0;
}
 
// Check if the queue is empty
int isEmpty() {
  if (front == -1) 
  
  return 1;
  return 0;
}
 
 
void enQueue() 
{ 
  int element;
  if (isFull())
    printf("\n Queue is full!! \n");
  else 
  {
    printf("\nEnter the element to be enqueued:");
    scanf("%d",&element);
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    items[rear] = element;
    printf("\n Inserted -> %d", element);
  }
}
 
 
int deQueue() {
  int element;
  if (isEmpty()) 
  {
    printf("\n Queue is empty !! \n");
    return (-1);
  } 
  else 
  {
    element = items[front];
    if (front == rear) 
    {
      front = -1;
      rear = -1;
    } 
    else 
    {
      front = (front + 1) % SIZE;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
  }
}
 
void show() {
  int i;
  if (isEmpty())
    printf(" \n Empty Queue\n");
  else 
  {
    printf("\n Front -> %d ", front);
    printf("\n Items -> ");
    for (i = front; i !=rear; i = (i + 1) % SIZE) 
    {
      printf("%d ", items[i]);
      printf("\n");
    }
    printf("%d ", items[i]);
    printf("\n Rear -> %d \n", rear);
  }
}
 
void main() 
{  
  while(choice != 4)  
    {  
        printf("Choose one from the below options...\n");  
        printf("\n1.Enqueue\n2.DeQueue\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                enQueue();  
                break;  
            }  
            case 2:  
            {  
                deQueue();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
}