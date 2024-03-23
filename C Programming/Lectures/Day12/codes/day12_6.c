// scan sets
#include<stdio.h>

int main()
{
    char str[50];
    printf("Enter the string :");
   //("%[a-z]s",&str); // scan only small letters
   //scanf("%[^A-Z]s",str); // scan everything except capital letters
   // scanf("%[^\n]s",str); // stop the scan at newline
   scanf("%[^.]s",str); // scan everything until . (including newline)
    
    printf("str = %s\n",str);
    return 0;
}