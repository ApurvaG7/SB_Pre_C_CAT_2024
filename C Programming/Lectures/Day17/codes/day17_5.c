//returning structure variable from the function

#include<stdio.h>
typedef struct date
{
    int dd;
    int mm;
    int yy;
}date;

date accept_data();
void print_data(date d1);

int main()
{
    date d1;
    d1 = accept_data();
    print_data(d1);
    return 0;
}

date accept_data()
{
    date d1;
    printf("Enter the date :");
    scanf("%d%d%d",&d1.dd,&d1.mm,&d1.yy);
    return d1;
}

void print_data(date d1)
{
    printf("Date : %d-%d-%d\n",d1.dd,d1.mm,d1.yy);
}