#include <stdio.h> 
  
#define MAX 50 
  
void insert(); 
void delete(); 
void display(); 
int queue_array[MAX]; 
int rear = - 1; 
int front = - 1; 
main() 
{ 
    int choice; 
    while (1) 
    {   printf("\nMENU:\n\t");
        printf("1.Insert element to queue \n\t"); 
        printf("2.Delete element from queue \n\t"); 
        printf("3.Display all elements of queue \n\t"); 
        printf("4.Quit \n\t"); 
        printf("Enter your choice : "); 
        scanf("%d", &choice); 
        switch (choice) 
        { 
            case 1: 
            insert(); 
            break; 
            case 2: 
            delete(); 
            break; 
            case 3: 
            display(); 
            break; 
            case 4: 
            exit(1); 
            default: 
            printf("Wrong choice \n\t"); 
        }  
    }  
}  
  
void insert() 
{ 
    int add_item; 
    if (rear == MAX - 1) 
    printf("Queue Overflow \n\t"); 
    else 
    { 
        if (front == - 1) 
         
        front = 0; 
        printf("\n\n\tInsert the element in queue : "); 
        scanf("%d", &add_item); 
        rear = rear + 1; 
        queue_array[rear] = add_item; 
    } 
}  
  
void delete() 
{ 
    if (front == - 1 || front > rear) 
    { 
        printf("Queue Underflow \n\t"); 
        return ; 
    } 
    else 
    { 
        printf("\n\tElement deleted from queue is : %d\n", queue_array[front]); 
        front = front + 1; 
    } 
}  
  
void display() 
{ 
    int i; 
    if (front == - 1) 
        printf("Queue is empty \n\t"); 
    else 
    { 
        printf("Queue is : \n\t"); 
        for (i = front; i <= rear; i++) 
            printf("%d ", queue_array[i]); 
        printf("\n"); 
    } 
} 