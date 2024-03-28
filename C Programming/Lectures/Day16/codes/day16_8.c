// predefined directives 
#include<stdio.h>

int main()
{
    printf("Current Line no : %d\n",__LINE__);
    printf("Current File = %s\n",__FILE__);
    printf("Todays Date = %s\n",__DATE__);
    printf("Current Time = %s\n",__TIME__);
    #line 100
    printf("Current Line no : %d\n",__LINE__);

    return 0;
}