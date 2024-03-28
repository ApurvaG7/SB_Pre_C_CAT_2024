// structure declaration : user defined data type

#include<stdio.h>
#include<string.h>

struct student
{
    int roll_no; // 4
    char name[50]; // 50
    float marks; // 4
};


int main()
{
   /* int roll_no;
    char name[50];
    float marks; */

    // variable initialization
    struct student s1 = {1,"Nisha",75.0f};
    printf("Roll no = %d\n",s1.roll_no);
    printf("Name = %s\n",s1.name);
    printf("Marks = %.2f\n",s1.marks);

    struct student s2; // variable declaration
    s2.roll_no = 2;
    strcpy(s2.name,"XYZ");
    s2.marks = 85.0f;
    printf("\n Student 2:\n");
    printf("Roll no = %d\n",s2.roll_no);
    printf("Name = %s\n",s2.name);
    printf("MArks = %.2f\n",s2.marks);

    s1.marks = 100;
    return 0;
}