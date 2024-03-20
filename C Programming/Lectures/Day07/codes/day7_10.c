// functions :
// return_type  function_name  (input parameters/arguments)
//{  function body }
/*
function declaration
function definition
function call
*/

// function with parameters and without return type
#include<stdio.h>

void addition(int num1,int num2);// function declaration

int main()
{ 
    addition(10,15); // function call
    addition(29,45); // (29,45)--> actual parameters
    return 0;
}

// function defination
void addition(int num1,int num2) // 29  45
{
    int sum = num1 + num2; // sum = 10 + 15
    printf("sum = %d\n",sum);    
} 


/*
void : return type : Do not want to return anything from function
addition : function name
(int num1,int num2) : input parameters/formal parameters/arguments, used while we perform any operation
inside the function body

*/