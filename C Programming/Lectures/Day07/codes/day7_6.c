// jump statements
// break : used in switch and loops

#include<stdio.h>

int main()
{

    for(int i=1;i<=10;i++)
    {
        if(i==5)
            break;
       
        printf("%6d",i); // 1 2 3 4
    }
    return 0;
}