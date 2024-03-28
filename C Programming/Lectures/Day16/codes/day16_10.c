// scanf in structure
#include<stdio.h>
struct employee
{
    int emp_id;
    char name[50];
    int salary;
}emp; // emp is a gloab variable


int main()
{
    printf("Enter the employee information :\n");

    printf("Enter the emp id :");
    scanf("%d",&emp.emp_id);

    printf("Enter the name :");
    scanf("%s",&emp.name);

    printf("Enter the salary !");
    scanf("%d",&emp.salary);

    printf("\n Employee Info :\n");
    printf("Empid = %d  name = %s  salary = %d\n",emp.emp_id,emp.name,emp.salary);
    return 0;
}