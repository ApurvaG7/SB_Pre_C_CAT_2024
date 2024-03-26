// string function simulation
// how to write your own string function
// string copy 
// we will try to understand how a string copy function works

#include<stdio.h>
void cpycpycpy(char destii[],char strr1[]);
void main()
{
    char str1[] = "I'm at a Payphone Trying to Call Home,";
    char dest[5000];
    cpycpycpy(dest,str1);
    printf("First String = %s\nSecond String = %s",str1,dest);

    

}

void cpycpycpy(char destii[],char strr1[])
{
    int i=0;
    while(strr1[i] != '\0') //I'm at a Payphone Trying to Call Home
    {
        destii[i] = strr1[i];
        i++;
    }
    destii[i] = '\0';   //I'm at a Payphone Trying to Call Home\0
    // why we added '\0' to the end of line is  bcoz till the loop is running the values are copied char by char
    // so its an char array
    // to make it an string we add '\0' at the end of the line
}