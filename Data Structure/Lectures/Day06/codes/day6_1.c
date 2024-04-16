// Singly Linear Linked List
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node* create_node (int data);
void add_first(int data);
void display();
void add_last(int data);
int count_nodes();
void add_at_pos(int data,int pos);
void delete_first();
void delete_last();
void delete_at_pos(int pos);

int main()
{
    add_first(10);
    add_first(20);
    add_first(30);
  //  display();
    add_last(40);
    add_last(45);
    add_first(60);
    add_last(80);
    display();
    add_at_pos(75,4);
    display();
    delete_first();
    display();
    delete_last();
    display();
    delete_at_pos(3);
    display();
    return 0;
}

struct node* create_node (int data) // 10
{
   struct node *ptr =(struct node*) malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("Malloc Failed !\n");
        return NULL;
    }
    else
    {
        ptr->data = data; // 10
        ptr->next = NULL;
    }

    return ptr;
}

void add_first(int data) // 10
{
    // create
    struct node *ptr = create_node(data); // 10
    // attach
    // a. if list is empty :
    if(head == NULL)
        head = ptr;
    else
    {
        // attach the new node to first node
        ptr->next = head;
        // update the head pointer
        head = ptr;
    }
}

void display()
{
    if(head == NULL)
        printf("List is Empty !\n");
    else
    {
        struct node *temp = head;
        printf("Head");
        while(temp != NULL)
        {
            printf("->%d",temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}

void add_last(int data)
{
    // create 
    struct node *ptr = create_node(data);
    // attach
    // a. if list is empty
    if(head == NULL)
        head = ptr;
    else //b. if list contains multiple nodes
    {
        struct node *trav = head;
        // traverse and stop at the last node
        while(trav->next != NULL)
        {
            trav = trav->next;
        }
        // attach the new node to the last node
        trav->next = ptr;
    }
}

void add_at_pos(int data,int pos)
{
    struct node *ptr = create_node(data);
    if (head == NULL)
    {
        if(pos == 1)
            add_first(data);
        else
            printf("List is Empty !\n");
    }
    else if(pos == 1)
        add_first(data);
    else if (pos == count_nodes()+1)
        add_last(data);
    else if(pos < 1 || pos > count_nodes()+1)
        printf("Invalid Position !\n");
    else
    {
        struct node *trav = head;
        for(int i =1;i<pos-1;i++)
        {
            trav = trav->next;
        }
        ptr->next = trav->next;
        trav->next = ptr;
    }
}

int count_nodes()
{
    int count = 0;
    if(head == NULL)
        printf("List is Empty !\n");
    else
    {
        struct node *trav = head;
        while(trav != NULL)
        {
            count++;
            trav = trav->next;
        }
    }
    return count;
}

void delete_first()
{
    if(head == NULL)
        printf("List is Empty !\n");
    else if (head->next == NULL)// if list contains only 1 node
    {
        free(head);
        head = NULL;
    }
    else // if list contains multiple nodes
    {
        struct node *temp = head;
        head = head->next; // or head = temp->next
        free(temp);
        temp = NULL;
    }
}

void delete_last()
{
    if(head == NULL)
        printf("List is Empty !\n");
    else if(head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *trav = head;
        // traverse till 2nd last node

        while(trav->next->next != NULL)
        {
            trav = trav->next;
        }
        free(trav->next);
        trav->next = NULL;
    }
}

void delete_at_pos(int pos)
{
    if(head == NULL)
        printf("List is Empty !\n");
    else if(pos == 1)
        delete_first();
    else if(pos == count_nodes())
        delete_last();
    else if(pos < 1 || pos > count_nodes())
        printf("Invalid Position !\n");
    else
    {
        // traverse till pos -1
        struct node *trav = head;
        for(int i=1;i<pos-1;i++)
        {
            trav = trav->next;
        }
        // take a back up of pos node
        struct node *temp = trav->next;

        // attach pos-1 node to pos+1 node
        trav->next = temp->next;
        // or trav->next = trav->next->next;

        // free pos node
        free(temp);
        temp = NULL;
    }
}