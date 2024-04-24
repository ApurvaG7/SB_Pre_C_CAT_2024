
#include<stdio.h>
//namespace demo


int g = 10 ; // global veri

namespace ns1
{
    int connector=3309;
    namespace nns
    {
        int a=200;
    }
}
namespace ns2
{
    int connector=8803;
    int num1=11;
    int num2=12;
    int num3=13;
    int num4=14;
    int num5=15;

}

int main()
{
    printf("\n value of g=%d",g);
    printf("\n value of g=%d",::g);
    printf("\n value of connector=%d",ns1::connector);
    printf("\n ns1::nns::a=%d",ns1::nns::a);
    printf("\n num1=%d",ns2::num1);
    //printf("\n num1=%d",num1);
    using namespace ns2;
    printf("\n num1=%d",num1);

    printf("\n");
    return 0;
}
