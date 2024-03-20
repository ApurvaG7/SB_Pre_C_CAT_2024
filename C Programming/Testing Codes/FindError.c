#include <stdio.h>

int main()
{
    printf("Hello World");
    int a,b,result=0;
    printf("\nEnter Value of a=");  printf("\nline 1\t");
    b=scanf("%d",&a);               printf("\nline 2");
    result = a / (sizeof(short int)-b);    printf("\nline 3");
    printf("\nresult = %d\n",result);       printf("\nline 4");
    result = a / (sizeof(char)-b);          printf("\nline 5");
    printf("\nresult = %d\n",result);       printf("\nline 6");

    return 0;
}

