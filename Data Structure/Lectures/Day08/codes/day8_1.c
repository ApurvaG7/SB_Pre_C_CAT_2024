#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct stack
{
int arr[SIZE];
int top;
};

void init_top(struct stack *ps);
void push(int data,struct stack *ps);
void pop(struct stack *ps);
int peek(struct stack *ps);
int stack_full(struct stack *ps);
int stack_empty(struct stack *ps);

int main()
{
    struct stack s;
    init_top(&s);
    int choice,element;
do{
    printf("0.Exit\n1.Push\n2.Pop\n3.Peek\n");
    printf("Enter Your choice !\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0: // exit
                exit(0);
        case 1: // Push
                
                if(stack_full(&s))
                    printf("Stack is Full !\n");
                else
                {
                    printf("Enter the element to insert :");
                    scanf("%d",&element);
                    push(element,&s);
                    printf("element Pushed = %d\n",element);
                }
                break;
        case 2: // Pop
                if(stack_empty(&s))
                    printf("Stack is Empty !\n");
                else
                {
                    int data = peek(&s);
                    pop(&s);
                    printf("Element Popped = %d !\n",data);
                }
                break;
        case 3: // Peek
                if(stack_empty(&s))
                    printf("Stack Empty ! Nothing to Peek !\n");
                else
                {
                    int data = peek(&s);
                    printf("Topmost Element = %d\n",data);
                }
                break;
        default :
                printf("Enter valid choice !\n");
                break;
    }
}while(choice != 0);
    return 0;
}

void init_top(struct stack *ps)
{
    ps->top = -1;
}

void push(int data,struct stack *ps)
{
   ps->top++; // increment the top

   // insert the data at the top position
   ps->arr[ps->top] = data;
}

void pop(struct stack *ps)
{
    // optional : assign 0 to the value at top
    ps->arr[ps->top] = 0;
    
    // decrement the top
    ps->top--;
}

int peek(struct stack *ps)
{
    return ps->arr[ps->top];
}

int stack_full(struct stack *ps)
{
    if(ps->top == SIZE-1)
        return 1;
    else
        return 0;
}

int stack_empty(struct stack *ps)
{
    if(ps->top == -1)
        return 1;
    else
        return 0;

    // return (ps->top == -1)
}