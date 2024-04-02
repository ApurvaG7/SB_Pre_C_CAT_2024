// Scanf in Structure
// sinlge data set

#include<stdio.h>

struct Employee
{
    int ID;
    char Name[50];
    int Sal;
}EMP;   // EMP is the global variable 

void main()
{
    printf("\nEnter The Employee Datum\n");

    printf("\nEnter ID : ");
    scanf("%d",&EMP.ID);
    // here we are storeing the data normally just into Struct EMP . ID
    // write & then Structure name then in which feild you wanna store the data
    printf("\nEnter Name : ");
    scanf("%s",&EMP.Name);
    // we are using %s to store the string data
    
    printf("\nEnter Salary : ");
    scanf("%d",&EMP.Sal);

    // Lets Print IT
    printf("\n\nThe Details of the Employee Are:\n");
    printf("\nEmployee ID = %d\n Name = %s\n Salary = %d",EMP.ID,EMP.Name,EMP.Sal);

}
