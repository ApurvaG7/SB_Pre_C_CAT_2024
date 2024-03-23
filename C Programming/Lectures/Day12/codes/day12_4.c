// character arrays
#include<stdio.h>

int main()
{
    char str[5] = {'A','B','C','D','E'}; // char array
    char str1[5] = {'I','N','F','O','\0'}; // string
    char str2[5] = {'I','N','F','O'}; // string
    // partial initialization -> remaining elements
    // initialized to \0

    char str3[5] = "Pune"; //string
    char str4[4] = "Pune"; // chaar array

   // char str5[]; not allowed
   char str5[] = "Sunbeam"; // string
   char str6[] = {'S','U','N','B','E','A','M'}; // char array
   
   printf("str3 = %s\n",str3); // Pune
   printf("str[2] = %c\n",str3[2]); // n

printf("\n str = %s\n",str);
   /*for(int i =0;i<5;i++)
   {
    printf("%4c",str[i]);
   }

   printf("\n str = %s\n",str); // char array */
    return 0;
}