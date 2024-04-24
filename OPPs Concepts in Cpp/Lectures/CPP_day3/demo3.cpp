
#include<stdio.h>
#include<iostream>
using namespace std;
//cin and cout
//cin   -> scanf()  -> >>
//cout  -> printf()  -> <<
int main()
{
    printf("\n Good morning  ..  ");
    cout<<"\n Good morning  ..  ";

    int a=10;
    printf("\n value of a=%d",a);
    cout<<"\n value of a="<<a;

    int x=22,y=33;
    printf("\n value of x=%d , value of y=%d",x,y);
    cout<<"\n value of x="<<x<<" , value of y="<<y;

    int n;
    cout<<"\n enter value for n";
    //scanf("%d",&n);
    cin>>n;
    cout<<"\n value of n="<<n;


    int x1,y1;
    cout<<"\n enter value for x1,y1";
    //scanf("%d%d",&x1,&y1);
    cin>>x1>>y1;
    cout<<"\n value of x1="<<x1<<" , value of y1="<<y1;

    printf("\n");
    return 0;
}
