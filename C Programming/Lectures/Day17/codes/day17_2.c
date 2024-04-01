// array of structure
#include<stdio.h>
#define size 3

struct student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct student std[size];

    printf("Enter the student details :\n");

    for(int i =0;i<size;i++)
    {
        printf("Student %d :\n",i+1);
        printf("Enter the roll no :");
        scanf("%d",&std[i].roll_no);
        printf("Enter the name :");
        scanf("%s",&std[i].name);
        printf("Enter the marks :");
        scanf("%f",&std[i].marks);
    }

    printf("The student details are :\n");

    for(int i =0;i<size;i++)
    {
        printf("student %d:\n",i+1); // student 1
        printf("roll no = %d  name = %s  marks = %.2f\n",std[i].roll_no,std[i].name,std[i].marks);
    }
    return 0;
}