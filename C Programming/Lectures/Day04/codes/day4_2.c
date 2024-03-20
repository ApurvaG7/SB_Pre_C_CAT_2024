// width specifiers

#include<stdio.h>

int main()
{
    int num = 100;
    float fnum = 10.57f;
    printf("%d\n",num);
    printf("%7d\n",num); // output is right justified
    printf("%-7d\n",num); // output is left justified
    printf("%8.3f",fnum);
    return 0;
}

//____100
//__10.570