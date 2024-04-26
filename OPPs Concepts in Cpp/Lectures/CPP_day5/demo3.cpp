#include<iostream>
using namespace std;
//Shallow-copy and Deep-copy
class complex
{
    int *ptrReal;
    int imag;
    public:
    complex(int r=1,int i=1) //r=4   i=7
    {
        cout<<"\n -----  complex(int,int) -----";
        this->ptrReal=new int;
        *ptrReal=r;
        this->imag=i;    
    }
    complex(complex& c1)
    {
        cout<<"\n -----  complex(complex&) -----";
        this->ptrReal=new int;
        *this->ptrReal=*c1.ptrReal;
        this->imag=c1.imag;
    }
    void printComplexNumber()
    {
        cout<<" Complex Number="<<*this->ptrReal<<"+j"<<this->imag;
    }
    ~complex()
    {
        cout<<"\n -----  ~complex() -----";
        if(this->ptrReal!=NULL)
        {
            delete this->ptrReal;
            this->ptrReal=NULL;
        }
    }
};
int main()
{
   complex c1(4,7);
   cout<<"\n c1=>";
   c1.printComplexNumber();

   complex cc(c1); //complex cc=c1;
   cout<<"\n cc=>";
   cc.printComplexNumber();

    return 0;
}