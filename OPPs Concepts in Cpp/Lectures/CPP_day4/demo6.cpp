#include<iostream>
using namespace std;
// use of Reference
//int x = a
//int& y = b
void myswap(int& x,int& y) // call by Reference
{
    int t=x;
    x=y;
    y=t;
}


int main()
{
    int a=11,b=99;
    cout<<"before  a="<<a<<"  b="<<b;
    myswap(a,b);
    cout<<"\nafter  a="<<a<<"  b="<<b;
    cout<<"\n";
    return 0;
}