// using 1 structure into another

#include<stdio.h>
typedef struct date
{
    int dd;
    int mm;
    int yy;
}date;

typedef struct employee
{
    int emp_id;
    char name[20];
    int salary;
    struct date DOB; // DOB is a variable of type struct date
    struct date DOJ; // DOJ is a variable of type struct date    
}emp;

int main()
{
    emp e1;
    printf("enter the employee details :\n");
    printf("enter the employee id :\n");
    scanf("%d",&e1.emp_id);

    printf("enter the name :");
    scanf("%s",&e1.name);

    printf("Enter the salary :");
    scanf("%d",&e1.salary);

    printf("Enter the date of Birth :");
    scanf("%d%d%d",&e1.DOB.dd,&e1.DOB.mm,&e1.DOB.yy);

    printf("Enter the Date of Joining :");
    scanf("%d%d%d",&e1.DOJ.dd,&e1.DOJ.mm,&e1.DOJ.yy);

    printf("Employee DEtails :\n");
    printf("Empid = %d  name = %s  salary = %d\n",e1.emp_id,e1.name,e1.salary);

    printf("Date of Birth : %d-%d-%d\n",e1.DOB.dd,e1.DOB.mm,e1.DOB.yy);

    printf("Date of Joining :%d-%d-%d\n",e1.DOJ.dd,e1.DOJ.mm,e1.DOJ.yy);
    return 0;
}