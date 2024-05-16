// Using 1 Structure into Another

#include<stdio.h>

// this is one structure in which we have different parameters 
// its an seperate structure which is 
typedef struct Date
{
    int dd;
    int mm;
    int yy;
}DDate;

typedef struct Employee
{
    int ID;
    char Name[100];
    float Salary;
    struct Date DOB;
    struct Date DOJ;
}EMP;


void main()
{
    EMP E1;

    printf("\nEnter The Details of the Employee E1\n");
    printf("\nEmployee ID : ");
    scanf("%d",&E1.ID);

    printf("\nEnter Name : ");
    scanf("%s",&E1.Name);

    printf("\nEnter Salary : ");
    scanf("%f",&E1.Salary);

    printf("\nEnter The Date of Birth of Employee : ");
    scanf("%d %d %d",&E1.DOB.dd,&E1.DOB.mm,&E1.DOB.yy);

    printf("\nEnter The Date of Joining of Employee : ");
    scanf("%d %d %d",&E1.DOJ.dd,&E1.DOJ.mm,&E1.DOJ.yy);

    printf("\n\n\tPrinting the Details of the Employee\n");

    printf("\n Employee ID : %d\n Name : %s\n Salary = %.2f\n",E1.ID,E1.Name,E1.Salary);

    printf(" Date of Birth : %d-%d-%d\n",E1.DOB.dd,E1.DOB.mm,E1.DOB.yy);
    printf(" Date of Joining : %d-%d-%d\n",E1.DOJ.dd,E1.DOJ.mm,E1.DOJ.yy);


}