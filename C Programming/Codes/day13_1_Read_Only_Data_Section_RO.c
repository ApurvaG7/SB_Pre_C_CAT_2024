// RO Data Section
// Read Only Data Section

#include<stdio.h>
void main()
{
    char str[] = "The chainsmokers";
    char *s_ptr = "Closer"; // data stored in Read Only Section

    printf("\nStr = %s",str);   // printing the string
    str[4] = 'C';   // 1000+4 ~ 5th location ~ 'c' update to 'C'
    printf("\nStr = %s",str);   // printing the updated string

    // printing the RO data string

    printf("\nS_ptr = %s",s_ptr);   // printing the RO string
    s_ptr[1] = 'L'; // updating the string
    // but the prog ends here bcoz of runtime error
    // we cannot update an Read Only Data Section
    // ie prog ends here while running
    printf("\nS_ptr = %s",s_ptr);   // printing the updated RO string



}