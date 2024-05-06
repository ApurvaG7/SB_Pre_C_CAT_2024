//Exception Handling

#include<iostream>
using namespace std;


int main()
{
    int n,d;
    try
    {
        cout<<"\n ENTER n and d";
        cin>>n>>d;
        if (d==0)
            throw "Error";
        int div=n/d;
        cout<<"\n Result="<<div;
    }
    catch(int e)
    {
        cout<<"\n ---divid by zero error --(int)";
    }
    catch(char e)
    {
        cout<<"\n ---divid by zero error --(char)";
    }
    catch(...)
    {
        cout<<"\n ---divid by zero error --(...)";
    }
    
    
    cout<<"\n";
    return 0;
}