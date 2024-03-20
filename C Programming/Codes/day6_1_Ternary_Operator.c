// Ternary Operator     Conditional Operator
/*
    Syantax
        condition ? Exp1(True) : Exp2(False)
*/

#include<stdio.h>
void main()
{
    int n1,n2,n3,max,min;
    printf("\nEnter The Numbers\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("\nGreatest of 2 nums\n");

    n1 > n2 ? printf("\nNum1 is Greater\n") :  printf("\nNum2 is Greater\n");

    printf("\n\n\nGreatest of 3 Nums \n");
    max = n1 > n2 ? ( n1>n3 ? n1 : n3) : ( n2>n3 ? n2 : n3);
     printf("\nGreatest of 3 numbers is %d\n",max);


    
    printf("\n\n\nSmallest of 3 Nums \n");
    min = n1 < n2 ? ( n1<n3 ? n1 : n3) : ( n2<n3 ? n2 : n3);
     printf("\nSmallest2 of 3 numbers is %d\n",min);
}