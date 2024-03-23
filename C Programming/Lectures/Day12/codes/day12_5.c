// scanf 
#include<stdio.h>

int main()
{
    char name[20];
    printf("Enter your name :");
    scanf("%s",name);
    
    // scanf scans only till white spaces
   // gets(name);

    printf("Name = %s\n",name);
    return 0;
}