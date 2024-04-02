// Structure
// Structure Declaration
// User Defined Data Type

#include<stdio.h>
#include<string.h>

struct Studen
{
    int Roll;   // 4 bytes 
    char Name[50];  // 50 bytes 
    float Mark; // 4 bytes 
};

void main()
{
    struct Studen S1 = {1,"Billy",99.9}; 
    // variable initialization S1 for the structure Studen
    // we have predefine the values of Studen S1
    
    // lets print the details of S1
    printf("\n Roll No. = %d",S1.Roll);
    printf("\n Name = %s",S1.Name);
    printf("\n Marks = %.2f",S1.Mark);

    printf("\n");
    // now lets define each values seperately
    struct Studen S2;
    S2.Roll = 2;
    strcpy(S2.Name,"Rick");
    S2.Mark = 86.3f;
    // here we have stored the value of Roll and Mark as usually
    // but we need to use strcpy() to copy the string Char by Char into the Structure

    // lets print the details of S1
    printf("\n Roll No. = %d",S2.Roll);
    printf("\n Name = %s",S2.Name);
    printf("\n Marks = %.2f",S2.Mark);


}

