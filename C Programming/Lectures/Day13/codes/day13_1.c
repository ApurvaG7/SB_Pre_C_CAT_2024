// RO Data section

#include<stdio.h>

int main()
{
    char str[] = "Sunbeam";
    char *s_ptr = "Hinjewadi"; //data stored in Read Only section

    printf("str = %s\n",str); // Sunbeam
    str[3] = 'B'; //100+3 
    printf("str = %s\n",str); // SunBeam

    printf("s_ptr = %s\n",s_ptr); // Hinjewadi
    s_ptr[3] = 'J'; // runtime error 
    printf("s_ptr = %s\n",s_ptr);

    return 0;
}