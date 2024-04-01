// size of structure : #pragma
#include<stdio.h>
//#pragma pack(1)
struct student
{
    int roll_no; // 4
    //1 1 1 1
    //2 2

    char name[20]; // 4 4 4 4 4
    // 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
    // 2 2 2 2 2 2 2 2 2 2 

    char grade; // 4
    // 1
    //2
};


int main()
{
    printf("Size of struct = %d\n",sizeof(struct student));
    return 0;
}