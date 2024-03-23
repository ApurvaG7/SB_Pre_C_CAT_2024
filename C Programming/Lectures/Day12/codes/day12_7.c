// sizeof and strlen
#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Sunbeam Info";

    printf("str = %s\n",str); // Sunbeam Info
    printf("size of str = %d\n",sizeof(str)); // 13
    printf("string length = %d\n",strlen(str)); // 12
    // strlen returns the length of characters till \0 (excluding \0)
    
    char str1[] = "Sunbeam\0Info";
    printf("str1 = %s\n",str1);
    printf("size of str1 = %d\n",sizeof(str1)); // 13
    printf("string length = %d\n",strlen(str1)); // 7
    
    return 0;
}