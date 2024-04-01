//bitfields
#include<stdio.h>
typedef struct employee
{
    int emp_id;
    unsigned int age : 7;
    //unsigned int gender : 1;
    char gender : 1;
    
}emp;


int main()
{
    emp e1 = {100,70,1};
    printf("size of e1 = %d\n",sizeof(e1));

  // printf("empid = %d  age = %d  gender = %d\n",e1.emp_id,e1.age,e1.gender);
    return 0;
}