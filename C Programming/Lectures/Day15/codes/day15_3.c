// char pointer to 2-D array
#include<stdio.h>

int main()
{
    char *str = "sunbeam";
   char *numbers[] = {"One","Two","Three","Four"};

   printf("%s\n",numbers[1]); // two
   printf("%c\n",numbers[2][2]); // r
   printf("%c\n",*(*(numbers+2)+2)); // r

   numbers[2][2] = 'R'; // runtime error
   printf("Good Bye !\n"); // not printed
    return 0;
}