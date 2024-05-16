// Array of Structure

// rather than creating multiple variables using array to store the data
// defineing the array as a Structure and then using it to store multiple data sets 

#include<stdio.h>
#define SIZE 3  // defineing the size of the array

struct Student
{
    int Roll;
    char Name[50];
    float Marks;
};
// using same structure

void main()
{
    struct Student Std[SIZE];
    // here we are initializing a structure variable Std and defineing its Size by #define
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter Roll No.");
        scanf("%d",&Std[i].Roll);
        printf("\nEnter Name :");
        scanf("%s",&Std[i].Name);
        printf("\nEnter Marks:");
        scanf("%f",&Std[i].Marks);

    }

    // printing the array details 
    printf("\n The Student Details are:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nRoll no. = %d\tName = %s\tMarks = %.2f",Std[i].Roll,Std[i].Name,Std[i].Marks);
    }
}