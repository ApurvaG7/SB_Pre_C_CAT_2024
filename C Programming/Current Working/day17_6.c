// Copying 1 Structure Variable into Another Structure Variable
// just simply assignment op

#include<stdio.h>

typedef struct Employee
{
    int ID;
    char Name[50];
    float Salary;
}Emp;

void main()
{
    Emp E1 = {101,"Artemis",999};
    // pre assigning the values to the Variable E1 of the Structure Emp
    
    Emp E2;
    // E2 another Variable of the Structure Emp

    E2 = E1;
    // Assignment op

    printf("\n Employee E2\t ID : %d\tName : %s\tSalary : Rs. %.2f",E2.ID,E2.Name,E2.Salary);
    // Printing the Details of Variable E2

    // here the actual data is copied to the variable E2 from E1
    // they both are different variables stored at different Location
    // their values are same but their Addresses are not same.
    // bcoz the Struct E1 and E2 variables are both created in Memory not in RO section
    
}
