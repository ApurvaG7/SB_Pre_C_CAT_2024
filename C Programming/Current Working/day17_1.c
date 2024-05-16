// Valid Syntax for Structure
// Anonymous Structure and Typedef
// Basics

/* 
A Structure is user defined Data Type
Structure stores logically releted elements in contigious memory locations
structure members can be accessed using . operator via structure variable
structure members cab be accessed using -> operator via struct pointer
size of struct == sum of sizes of all the members
if structure variable is initialized partially at its point of declaration
remaining elements are initialized as Zero

*/
#include<stdio.h>

struct 
{
    int a;
    char b[10];
    float c;
}qwe;
// here qwe is the variable of anonymous structure 


typedef struct student
{
    int a;
    char b[10];
    float c;
}stdu;
// here name of the structure is Student
// but using typedef we can give it another shorter name    ie. stdu
// struct student   --  stdu
// struct student is replaced by stdu

// in the above case it was an anonymous structure so 'qwe' became an variable for that structure
// here using typedef we can also name anonymous structure

typedef struct 
{
    int a;
    char b[10];
    float c;
}time;
// here time is another name of anonymous structure
// its not a variable bcoz we gave typedef 
// we can call this structure using 'time' name

struct vehicle
{
    int a;
    char b[10];
    float c;
};
// its an normal structure
// we can also create its variable or name in the () too


void main()
{
    typedef struct vehicle v1;
    // v1 is another name of the struct vehicle

    v1 car;
    // here car is the variable of the vehicle struct
    // struct vehicle  --  v1
    // struct vehicle is replaced by v1


}
