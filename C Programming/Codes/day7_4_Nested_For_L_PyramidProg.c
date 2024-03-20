// Nested for loop
/*
1
1   2
1   2   3
1   2   3   4
1   2   3   4   5
*/
//and
/*
                1
            1   2
        1   2   3
    1   2   3   4
1   2   3   4   5
*/

#include<stdio.h>
void main()
{
    printf("\n Left Side Printing\n");
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n Right Side Printing\n");
    for(int i=1;i<=5;i++)
    {   
        for(int j=5;j>i;j--)
            printf(" ");
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    
}