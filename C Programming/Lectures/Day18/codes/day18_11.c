// function pointer
#include<stdio.h>
void add(int num1,int num2);
void subtract (int num1,int num2);
int multiply (int num1,int num2);
int main()
{
    add(10,20);
    subtract(25,10);

    printf("Address of add = %u\n",add);
    printf("Address of add = %u\n",&add);
    void(*fun_ptr)(int,int); 
    // function pointer which will hold the address of function 
    //having 2 parameters and returing void
    
    fun_ptr = &add;
    printf("fun_ptr = %u\n",fun_ptr);
    //add(10,20);
    fun_ptr(20,30);

    fun_ptr = &subtract;
    fun_ptr(40,25);
  
    int(*ptr1)(int,int);
    ptr1 = &multiply;
    int result = ptr1(10,10);
    printf("REsult = %d\n",result);
    return 0;
}

void add(int num1,int num2)
{
    printf("Addition = %d\n",num1 + num2);
}

void subtract (int num1,int num2)
{
    printf("Subtraction = %d\n",num1 - num2);
}

int multiply (int num1,int num2)
{
    return num1 * num2;
}