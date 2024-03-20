//  Switch Case
//  Simple Calculator eg.
#include<stdio.h>
void main()
{
    int n1,n2,n3,n4,a;
    printf("\nEnter 2 nums :");
    scanf("%d %d",&n1,&n2);
    printf("\n1.Add\t2.Sub\t3.Mul\t4.Div\n");
    printf("\nChoice :");
    scanf("%d",&a);
    

    switch(a){
        case 1: printf("\n Add = %d\n",n1+n2);
                break;

        case 2: printf("\n Sub = %d\n",n1-n2);
                break;
        
        case 3: printf("\n Mul = %d\n",n1*n2);
                break;
        
        case 4: printf("\n Div = %d\n",n1/n2);
                break;
            
        default : printf("\n Cant you even read the above A$$H");
    
    }
    char ch;
    printf("\nSame Prog but Enter the Char or Symbol Now\n");
    printf("\n+ .Add\t- .Sub\t* .Mul\t/ .Div\n");
    printf("\nChoice :");
    scanf("%*c%c",&ch);

    switch(ch){
        
        case '+': printf("\n Add = %d\n",n1+n2);
                break;

        case '-': printf("\n Sub = %d\n",n1-n2);
                break;
        
        case '*': printf("\n Mul = %d\n",n1*n2);
                break;
        
        case '/': printf("\n Div = %d\n",n1/n2);
                break;
            
        default : printf("\n Cant you even read the above A$$H");
    }
}