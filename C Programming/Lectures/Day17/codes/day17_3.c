//Accessing structure data using the pointer variable

#include<stdio.h>
struct employee
{
    int emp_id;
    char name[20];
    float salary;
};

int main()
{
    struct employee e1;
    struct employee *ptr = &e1;

    printf("Enter the employee details :\n");
    printf("Enter the employee id :");
    scanf("%d",&e1.emp_id);

    printf("Enter the name :");
    scanf("%s",&e1.name);

    printf("enter the salary :");
    scanf("%f",&e1.salary);

    printf("Employee Details using e1 :\n");
    printf("emp id = %d  name = %s  salary = %.2f\n",e1.emp_id,e1.name,e1.salary);

    printf("Employee Details using ptr :\n");
    printf("emp id = %d  name = %s  salary = %.2f\n",ptr->emp_id,ptr->name,ptr->salary);

    return 0;
}