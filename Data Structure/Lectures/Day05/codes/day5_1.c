#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
void add_first(int data);

int main()
{
    add_first(10);
    return 0;
}
 
struct node * create_node(int data) // 10
{
    struct node *ptr =(struct node*) malloc(sizeof(struct node));

    if(ptr == NULL)
        printf("Malloc Failed !");
    else
    {
        ptr->data = data;
        ptr->next = NULL;
    }
   
    return ptr;
}

void add_first(int data) // 10
{
    // step 1 : create a node
     struct node *ptr = create_node(data); // 10
     // step 2: attach at the first position
     // a. if list is empty :
     if(head == NULL)
        head = ptr; // attach the node to head pointer
    else // if linked list contains nodes
    {
        ptr->next = head;
        head = ptr;
    }
}