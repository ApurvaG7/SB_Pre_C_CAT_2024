//template
#include<iostream>
using namespace std;


 template<class T>
 void mySwap(T& x,T& y)
 {
     T t=x;
     x=y;
     y=t;
 }
 
// int main()
// {
//     int a=55, b=99;
//     cout<<"\n before swap a="<<a<<" b="<<b;
//     mySwap(a,b);
//     cout<<"\n after swap a="<<a<<" b="<<b;

//     char a1='A' , b1='B';
//     cout<<"\n before swap a1="<<a1<<" b1="<<b1;
//     mySwap(a1,b1);
//     cout<<"\n after swap a1="<<a1<<" b1="<<b1;
//     cout<<"\n";
//     return 0;
// }



class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        this->real=r;
        this->imag=i;
    }
    void printComplexNumber()
    {
        cout<<"=>"<<this->real<<"+j"<<this->imag;
    }
};


int main()
{
    complex c1(11,11), c2(99,99);
    cout<<"\n before swap";
    cout<<"\n c1=";
    c1.printComplexNumber();
    cout<<"\n c2=";
    c2.printComplexNumber();
    mySwap(c1,c2);
    cout<<"\n after swap";
    cout<<"\n c1=";
    c1.printComplexNumber();
    cout<<"\n c2=";
    c2.printComplexNumber();

    cout<<"\n";
    return 0;
}

