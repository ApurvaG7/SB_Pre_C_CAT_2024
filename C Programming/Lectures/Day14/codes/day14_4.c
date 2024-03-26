
// char 2-D arrays printing and size
#include<stdio.h>

int main()
{
    char departments[][50] = {"HR","Training","Marketing","Sales"};

    printf("dept[1] = %s\n",departments[1]); // Training
    printf("dept[2][3] = %c\n",departments[2][3]); // k
    printf("dept[2][3] = %c\n",*(*(departments+2)+3)); // k
    printf("size of departments = %d\n",sizeof(departments));// 200
    printf("size of deparment[1] (row) = %d\n",sizeof(departments[1])); // 50
    printf("size of departments[2][6] = %d\n",sizeof(departments[2][6])); // 1
    return 0;
}