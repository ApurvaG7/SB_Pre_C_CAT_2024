// jump statements : continue
// continue is used only with loops
#include<stdio.h>

int main()
{

    for(int i=1;i<=10;i++)
    {
        if(i%2 == 0)
            continue;
        
        printf("%5d",i);// 1 3 5 7 9
    }
    return 0;
}