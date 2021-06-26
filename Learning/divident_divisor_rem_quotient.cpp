#include <iostream>
using namespace std;
int main()
{
    int divident ,divisor,remainder;
    float quotient;
    cout<<"Enter divident ";
    cin>>divident;
    cout<<"Enter divisor ";
    cin>>divisor;
    if (divisor>0)
    {
        quotient=(float)divident/divisor;
        remainder=divident%divisor;
        cout<<endl<<"Quotient is: "<<quotient<<"\tRemainder is: "<<remainder;
    }

    else
    cout<<"divisor is smaller then zero.";


    return 0;
}