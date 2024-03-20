//  Multiple Switch Cases in a Single O/P

#include<stdio.h>
void main()
{
    int month;
    printf("\nEnter the Month Number : ");
    scanf("%d",&month);

    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                printf("\n This Month has 31 Days Dammmmmm\n");
                break;
        
        case 2:
                printf("\nFor Your General Knowledge\nIts a Feb Month it cannot have more than 29 days it mostly has 28 days\nOnly in a Leap Year it has 29");
                break;
        
        case 4: case 6: case 9: case 11:    
                printf("\nObviously you already know it only has 30 Days......Man");

        default :
            printf("\nARE YOU DUMB????");
            break;

    }
}