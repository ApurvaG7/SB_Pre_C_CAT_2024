//Function :
// return_type      function_name       (input parameters/arguments)
//  { function body}
/*
    function declaratio
    function defination
    function call
*/

// type 1
// function with parameters and without return type

#include<stdio.h>

void Add(int n1,int n2); //this is function declaration

void main()
{
    Add(15,25); // this is function call
    Add(30,50);
    
}

// function defination
void Add(int a1,int a2) // here we can take anything to pass the values but the data type should be same 
{
    int sum = a1 + a2;
    printf("\nSum = %d + %d = %d",a1,a2,sum);

}

// here the function declaration is done at the end we can also do it at the start
// but its better to write the main file first 
// then declare all the functions using function declaration
// then when the function call is  done it will be easier to understand

// void : return type : Do not want to return anything from function
// addition : function name
// (int a1,int a2) : input parameters/formal parameters/arguments, used while we perform any operation inside the function body
