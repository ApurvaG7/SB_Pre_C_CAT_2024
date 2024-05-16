// Passing Structuer to the Function using Address Pointer

#include<stdio.h>

typedef struct Student
{
    int Roll;
    char Name[50];
    float Marks;
}Stdu;
// basic structure with name Stdu

void Accept(Stdu *Ptr);
void Print(Stdu S1);


void main()
{
    Stdu S1;
    Accept(&S1);// passing the base address of S1


    Print(S1);// printing the data using another function
}

// we are passing the base address via pointer so we need the same structure pointer
// struct Student -- Stdu
void Accept(Stdu *Ptr)
{
    printf("\nEnter The Student Details:");
    printf("\nEnter Roll No: ");
    scanf("%d",&Ptr->Roll);
    // here ptr is pointing to the base address of the structure
    // &Ptr is pointing to the address of Roll in the Structure Student

    printf("\nEnter Name : ");
    scanf("%s",&Ptr->Name);

    printf("\nEnter Marks : ");
    scanf("%f",&Ptr->Marks);
}

void Print(Stdu S1)
{
    printf("\n Student Details Are :");
    printf("\nRoll No : %d\tName : %s\t Marks : %.2f",S1.Roll,S1.Name,S1.Marks);
    // here we are printing the data normally as we are just reading from the structure we dont need to pass the address
    // we can normally access the data and print it 
}