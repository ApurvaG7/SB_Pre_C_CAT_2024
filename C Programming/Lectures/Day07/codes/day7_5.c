// nested for loop
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<stdio.h>

int main()
{
    for(int i =1;i<=5;i++) // rows
    {
        for(int j=1;j<=i;j++)
        {
            printf("%4d",j);
        }
        printf("\n");
    }

    return 0;
}