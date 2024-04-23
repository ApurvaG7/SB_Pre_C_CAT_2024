
#include<stdio.h>

class empty
{

};

int main()
{
    empty e1;
    printf("\n size of empty class object e1=%d",sizeof(e1)); // 1 byte
    empty e2;

    printf("\n");
    return 0;
}
