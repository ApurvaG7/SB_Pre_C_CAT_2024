// Linear queue
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct queue
{
    int arr[SIZE];
    int rear;
    int front;
}queue;
void init_queue(queue *ptr);
void enqueue (int data, queue *ptr);
void dequeue (queue *ptr);
int queue_full(queue *ptr);
int queue_empty(queue *ptr);
int peek(queue *ptr);

int main()
{
    queue Q;
    init_queue(&Q);
    int choice;
do{
    printf("0.Exit\n1.Enqueue\n2.Dequeue\n3.Peek\n");
    printf("Enter your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0:     
                exit (0);
        case 1: // Enqueue
                if(queue_full(&Q))
                    printf("Queue is Full !\n");
                else
                {
                    int data;
                    printf("Enter the data to insert :");
                    scanf("%d",&data);
                    enqueue(data,&Q);
                    printf("Data inserted = %d\n",data);
                }
                break;
        case 2: // Dequeue
                if(queue_empty(&Q))
                    printf("Queue is Empty !\n");
                else
                {
                    int data = peek(&Q);
                    dequeue(&Q);
                    printf("Data Deleted = %d\n",data);
                }
                break;
        case 3: // Peek
                if(queue_empty(&Q))
                    printf("Queue is Empty ! Nothing to Peek !\n");
                else
                    {
                        int data = peek(&Q);
                        printf("Frontmost Element = %d\n",data);
                    }
                    break;
        default :
                    printf("Enter the valid choice !\n");
                    
    }
}while(choice !=0);
    return 0;
}

void init_queue(queue *ptr)
{
    ptr->front = -1;
    ptr->rear = -1;
}

void enqueue (int data, queue *ptr)
{
    // increment the rear
    ptr->rear++; 
    // insert the data at the rear position
   ptr->arr[ptr->rear] = data;
   // if front is at -1 , bring front to 0
   if(ptr->front == -1)
    ptr->front = 0;
}

void dequeue (queue *ptr)
{
    // optional : assign the front element to 0
    ptr->arr[ptr->front] = 0;
    
    // increment the front 
    ptr->front++;
}

int queue_full(queue *ptr)
{
    if(ptr->rear == SIZE-1)
        return 1;
    else
        return 0;

    // return (ptr->rear == SIZE-1);
}

int queue_empty(queue *ptr)
{
    if(ptr->rear == -1 || ptr->front > ptr->rear)
        return 1;
    else
        return 0;
}

int peek(queue *ptr)
{
    return ptr->arr[ptr->front];
}