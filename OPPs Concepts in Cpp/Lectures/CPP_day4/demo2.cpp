#include<iostream>
using namespace std;
// const concept

int main()
{
   
    int n;
    n=6;
    n=10;

    //const int c; //error
    const int c=11;

    // c++;  //error
    // c=22;  //error

    cout<<"\n const c="<<c;
    
    return 0;
}