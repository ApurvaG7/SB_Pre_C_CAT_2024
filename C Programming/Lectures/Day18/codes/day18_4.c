// union
#include<stdio.h>
typedef struct student
{
    int roll_no; // 4
    char name[20]; // 20
    int std; // 4
    union   // 4
    {
        int marks;
        char grade;
    }result; // result is the variable of union
}student; // student is another name


int main()
{
    student s1;
    printf("Size of student = %d\n",sizeof(student));
    printf("Enter the student details : roll no = ");
    scanf("%d",&s1.roll_no);
    printf("name = ");
    scanf("%s",&s1.name);
    printf("Standard = ");
    scanf("%d",&s1.std);

    if(s1.std >= 1 && s1.std <= 4)
    {
        printf("Enter the grade :");
        scanf("%*c%c",&s1.result.grade);
    }
    else
    {
        printf("Enter the marks :");
        scanf("%d",&s1.result.marks);
    }

    printf("Student Details :\n");
    printf("Roll no = %d  name = %s  std = %d\n",s1.roll_no,s1.name,s1.std);

    if(s1.std >= 1 && s1.std <= 4)
    {
        printf("grade = %c\n",s1.result.grade);
    }
    else
        printf("Marks = %d\n",s1.result.marks);
    return 0;
}