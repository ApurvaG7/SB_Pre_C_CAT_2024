#include<iostream>
using namespace std;
// constDemo class

class constDemo 
{
    int n;
    const int c;
    mutable int m;
    public:
    constDemo():c(20) //constructors member initializer list.
    {
        n=10;
       // c=20;
        m=30;
    }
    void printData() const //can not modify state of current object 
    {
       // n++;
       // c++;
        m++;  //mutable data allowed to modify in const function
        cout<<"\n n="<<n;
        cout<<"\n c="<<c;
        cout<<"\n m="<<m;
    }
};

int main()
{
    constDemo d1;
    d1.printData();
    cout<<"\n";
    return 0;
}