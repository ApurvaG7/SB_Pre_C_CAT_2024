// data types and range and out of value range
#include<stdio.h>
void main()
{
    char c1 = 'A', c2 = 'B', csum = c1+c2;
    printf("sum = %d\n",csum);
    // the answer will be 125 
    // A in ASCII is 65 and B is 66 
    // so the total sum is 131
    // but the range of signed char is only between -128 to +127
    // so the sum doesn't fit in the char range
    // what it will do is go in circular order
    // i.e 0,1,2......126,127,-128,-127,-126,-125,-124
    // so  0,1,2......126,127, 128, 129, 130, 131
    // so thats how the answer comes -125

    int add = c1 + c2;
    printf("add = %d",add);
    // the answer will be 131
    // bcoz the int has more range than char 
    // so it can store more values and char
    
}