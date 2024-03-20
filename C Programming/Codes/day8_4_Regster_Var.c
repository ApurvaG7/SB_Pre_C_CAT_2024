// Register Variable
#include<stdio.h>
void main()
{
    register int num = 101;
    printf("\n Value of Num is = %d",num);   
    register int num2;
    scanf("%d",&num2); // here is the error we cannot assign & to an register variable
    printf("\n Value of Num is = %d",num2);   
}

// When register store class is used we try to request register to identify with some name
// there is no gurantee that our register request will be accepted

// there are very few register availabel in a CPU 
// our request may be rejected
// and it will be converted to auto // aka normaly how we declare
// if the request is accepted then the program will run much faster reducing the runtime
// we cannot apply address of operator on register 
// means a register does not have an Address  //  we cannot use ' & ' to a register variable
// we also cannot request register other than local scope   
// means a register variable cannot be used as a global variable
// it can be only used locally
