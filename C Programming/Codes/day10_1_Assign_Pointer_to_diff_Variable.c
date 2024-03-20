// assigning address of one type of variable to different type of pointer

#include<stdio.h>
void main()
{
    int num = 789;
    char *ptr = &num;

    printf("\n Num = %d",num);  //789
    printf("\n Address of Num = %u",&num);  // 1001

    printf("\n Num using pointer = %d",*ptr);   //21
}

// why do we get 21 when we print 789 using an 
/*

we know that num is an Int variable
so it will take 4 bytes of space
so the bitwise representation of 789 will become

MSB......................2048   1024    512     256     128     64      32      16      8       4       2       1
0                           0      0      1      1       0       0       0       1      0       1       0       1             
                                                                [                                                ]
                                                                                        Char holds only 1 Byte

                                                                64      32      16      8       4       2       1
                                                                0        0       1      0       1       0       1
                                                               MSB              16              4               1   == 21


here Char only stores 1 byte of data
so itll discard the remaining data of Int and only calculate the result on 1 byte ~ 8 bits
so we get the output 21

we also get a warning bcoz we are storeing a int value at an char value




*/