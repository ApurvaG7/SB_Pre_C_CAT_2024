// do while loop using switch case
// switch case

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n1,n2,n3,n4;
    
    printf("\nEnter 2 Nums \n");
    scanf("%d %d",&n1,&n2);

    do{
        printf("\n 0. Exit  1. Add  2. Sub  3. Mul  4. Div\nSelect one Right Now: ");
        scanf("%d",&n3);

        switch(n3)
        {
            case 0: exit(0);
            case 1: //add 
                printf("\nAdd = %d\n",n1+n2);
                break;
            case 2: //sub 
                printf("\nSub = %d\n",n1-n2);
                break;
            case 3: //mul 
                printf("\nMul = %d\n",n1*n2);
                break;
            case 4: //div
                printf("\nDiv = %d\n",n1/n2);
                break;
        }
        
    }while(n3!=0);

}