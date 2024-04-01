// union : concept
#include<stdio.h>

union test
{
    int num;
    char ch;
};

int main()
{
    union test t1;
    printf("size of union test = %d\n",sizeof(t1)); // 4
    t1.num = 10;

    printf("t1.num = %d\n",t1.num); // 10

    t1.ch = 'a';
    printf("t1.num = %d\n",t1.num);  // 97
    printf("t1.ch = %c\n",t1.ch); // a
    return 0;
}