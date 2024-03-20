// short hand operators 
// +=       -=      *=      /=      
// =+       =-


#include<stdio.h>
void main()
{
    int n1,n2;
    scanf("%d %d", &n1, &n2);

    printf("\nNumbers n1 = %d \t n2 = %d",n1,n2);

    n1 += n2;//addition
    printf("\n n1 = %d \t n2 = %d",n1,n2);

    n1 -= n2;//substraction
    printf("\n n1 = %d \t n2 = %d",n1,n2);

    n1 =+ n2;//+ve value assign
    printf("\n n1 = %d \t n2 = %d",n1,n2);

    n1 =- n2;//-ve value assign
    printf("\n n1 = %d \t n2 = %d",n1,n2);

    n1 /= n2;// divide
    printf("\n n1 = %d \t n2 = %d",n1,n2);

    n1 *= n2;//multiplication 
    printf("\n n1 = %d \t n2 = %d",n1,n2);

    printf("\n\n ");


    n1=10;
    n1 += 2;    // num = num +2
    printf("\n n1 = %d",n1);

    n1=10;
    n1 =+ 2;    // num = 2
    printf("\n n1 = %d",n1);

    n1=10;
    n1 -= 2;    //num = num-2
    printf("\n n1 = %d",n1);

    n1=10;
    n1 =- 2;    //num = -2
    printf("\n n1 = %d",n1);

    n1=10;
    n1 /= 2;    // num = num /2
    printf("\n n1 = %d",n1);

    n1=10;
    n1 *= 2;    // num = num *2
    printf("\n n1 = %d",n1);





}