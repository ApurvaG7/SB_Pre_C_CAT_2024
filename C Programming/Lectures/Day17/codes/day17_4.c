//Passing structure to the function using address(pointer)

#include<stdio.h>

typedef struct student
{
    int roll_no;
    char name[20];
    float marks;
}student;

void accept_data(student *ptr);
void print_data(student s1);

int main()
{
    student s1;
    accept_data(&s1);
    print_data(s1);
    return 0;
}

/* 
pass by value
void accept_data(student s1)
{
    printf("Enter the student data :\n");
    printf("Enter the roll no name and marks :");
    scanf("%d%s%f",&s1.roll_no,&s1.name,&s1.marks);
}*/


void accept_data(student *ptr)
{
    printf("Enter the student data :\n");
    printf("Enter the roll no :");
    scanf("%d",&ptr->roll_no);

    printf("Enter the name :");
    scanf("%s",&ptr->name);

    printf("Enter the marks :");
    scanf("%f",&ptr->marks);
}
void print_data(student s1)
{
    printf ("Student details :\n");
    printf("roll no = %d  name = %s  marks = %.2f\n",s1.roll_no,s1.name,s1.marks);
}