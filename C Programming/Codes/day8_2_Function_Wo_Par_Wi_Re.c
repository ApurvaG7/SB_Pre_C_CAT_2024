// function
// without parameters and with return 

#include<stdio.h>
int sub(void);

void main()
{
    printf("\n Sub = %d",sub());
}

int sub(void){
    int n1 = 25, n2 = 45;
    int total = n1-n2;
    return total;
    
}