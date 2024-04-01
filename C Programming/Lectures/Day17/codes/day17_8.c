// nested structure
#include<stdio.h>

struct student
{
    int roll_no;
    struct
    {
        char f_name[10];
        char m_name[10];
        char l_name[10];
    }name; // name is a variable of anonymous nested structure
    int marks;
};

int main()
{
    struct student s1;

    printf("Enter the student details :");
    printf("Enter the roll no :");
    scanf("%d",&s1.roll_no);

    printf("Enter the Full name :");
    scanf("%s%s%s",&s1.name.f_name,&s1.name.m_name,&s1.name.l_name);

    printf("Enter the marks :");
    scanf("%d",&s1.marks);

    printf("Student details :");
    printf("Roll no = %d\n",s1.roll_no);

    printf("name = %s  %s  %s\n",s1.name.f_name,s1.name.m_name,s1.name.l_name);

    printf("Marks = %d\n",s1.marks);
    return 0;
}