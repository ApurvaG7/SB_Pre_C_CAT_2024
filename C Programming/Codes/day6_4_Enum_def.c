// enum 
//  User Defined Datatype

#include<stdio.h>
//enum always return a integer value 
// its starts  from 0 always and gets incremented by +1
// we can also assign values by ourself
// enum can have same value for multiple variables
// jan=1 feb=2 mar=3 apr=1 feb=2
// here if we ask for 1 we will get jan & apr 
// both will be retuned
enum year{jan=1,feb,mar,apr,may,jun,jul,aug,sept,oct,nov,dec};

void main()
{
    enum year month;
    // enum year     is user defined datatype
    // month         is its Variable

    printf("\n What's the Month bro???  ");
    scanf("%d",&month);

    switch(month){
        case jan:case mar:case may:case jul:case aug:case oct:case dec:
            printf("\n This Month has 31 Days Dammmmmm\n");
                break;
        
        case feb: 
            printf("\nFor Your General Knowledge\nIts a Feb Month it cannot have more than 29 days it mostly has 28 days\nOnly in a Leap Year it has 29");
                break;

        case apr: case jun: case sept: case nov:
            printf("\nObviously you already know it only has 30 Days......Man");

        default :
            printf("\nARE YOU DUMB????");
            break;


    }

}
