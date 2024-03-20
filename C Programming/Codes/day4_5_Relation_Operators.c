// relational operators   
// <    <=      >       >=      ==      !=
// returns 0(false)     1(true)

#include<stdio.h>
void main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2); //eg 10 , 20
    printf("\n n1 = %d > n2 = %d = %d",n1,n2,n1>n2);    
    // 10 is not  greater than 20 so false ans == 0
    printf("\n n1 = %d < n2 = %d = %d",n1,n2,n1<n2);
    // 10 is less than 20 so true ans == 1
    printf("\n n1 = %d >= n2 = %d = %d",n1,n2,n1>=n2);
    // 10 is not greater than or equal to 20 so false ans == 0
    printf("\n n1 = %d <= n2 = %d = %d",n1,n2,n1<=n2);
    // 10 is less than 20 (also =) so true ans == 1
    printf("\n n1 = %d == n2 = %d = %d",n1,n2,n1==n2);
    // 10 is equal to 20 is wrong so false ans == 0
    printf("\n n1 = %d != n2 = %d = %d",n1,n2,n1!=n2);
    // 10 is not equal to 20 is right so true == 1

}