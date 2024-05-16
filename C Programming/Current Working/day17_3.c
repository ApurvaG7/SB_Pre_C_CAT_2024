// Accessing Structure Data usign Pointer Variable

#include<stdio.h>

struct Employee
{
    int ID;
    char Name[50];
    float Salary;
};

void main()
{
    struct Employee Emp;
    // Emp is the variable
    struct Employee *ptr = &Emp;
    // *ptr is holding the base address of Emp variable
    // as the pointer is holding the address of a structre variable 
    // the pointer variable should also be of that structure


    printf("\nEnter Employee Details :");
    printf("\nEnter ID : ");
    scanf("%d",&Emp.ID);
    printf("\nEnter Name : ");
    scanf("%s",&Emp.Name);
    printf("\nEnter Salary : ");
    scanf("%f",&Emp.Salary);

    printf("\n\nPrinting Details of the Employee using Variable\n");
    printf("EMP ID : %d\tName : %s\tSalary : %.2f",Emp.ID,Emp.Name,Emp.Salary);

    printf("\n\nPrinting Details of the Employee using Pointer\n");
    printf("EMP ID : %d\tName : %s\tSalary : %.2f",ptr->ID,ptr->Name,ptr->Salary);
    // here we are accessing the values of a structure using a pointer variable
    // to access the values of a structure using pointer we need to use -> (arrow operator)
    

}