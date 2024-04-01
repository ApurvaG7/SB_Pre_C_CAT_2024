//copying 1 structure variable into another
#include<stdio.h>
typedef struct employee
{
    int emp_id;
    char name[20];
    int salary;
}emp;

int main()
{
    emp e1 = {100,"abc",10000};
    emp e2;
    e2 = e1;

    printf("employee e2 : empid = %d  name = %s  salary = %d\n",e2.emp_id,e2.name,e2.salary);
   
    if(e1.emp_id == e2.emp_id)
        printf("employees are same !");
    else
        printf("Not same !");
    return 0;
}