#include <iostream>
using namespace std;
int main()
{
    int num1,num2,min,i,hcf;
    cout<<"\nEnter first number : ";
    cin>>num1;
    cout<<"\nEnter second number : ";
    cin>>num2;
    if (num1<num2)
    min=num1;
    else
    min=num2;
    for ( i = 1; i <= min; i++)
    {
        if (num1%i==0&&num2%i==0)
        {
            hcf=i;
        }
        
    }
    cout<<"\nGCD of "<<num1<<" and "<<num2<<" is : "<<hcf;


    return 0;
}