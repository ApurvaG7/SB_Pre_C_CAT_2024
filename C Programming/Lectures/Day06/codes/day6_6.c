// enum : user-defined datatype
#include<stdio.h>

enum year{jan=1,feb,mar,apr,may,jun,jul,aug,sept,oct,nov,dec};

int main()
{
    enum year month;
    // enum year is a datatype. month is its variable
    printf("Enter the month !");
    scanf("%d",&month); // 8

    printf("june = %d\n",jun);
    printf("sept = %d\n",sept);

     switch(month)
    {
        case jan:
        case mar:
        case may:
        case jul:
        case aug:
        case oct:
        case dec:
                printf("This month has 31 days !");
                break;
        case feb:
                printf("This month has 28/29 days !");
                break;
        case apr: case jun: case sept: case nov:
                printf("This month has 30 days !");
                break;
        default :
                printf("Please Enter the valid month !");
    }

    return 0;
}