// string function simulation
// string copy
#include<stdio.h>

void my_strcpy(char dest[],char src[]);
int main()
{
    char src[] = "Sunbeam";
    char dest[50];
    my_strcpy(dest,src);
    printf("src = %s  dest = %s\n",src,dest);
    return 0;
}

void my_strcpy(char dest[],char src[])
{
    int i = 0;
    while(src[i] != '\0') // sunbeam\0
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // sunbeam\0
}
