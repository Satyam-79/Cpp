#include <iostream>
using namespace std;
int main()
{
    int num,temp,sum=0;
    cout<<"\nEnter the number : ";
    cin>>num;
    cout<<"\nSum of digits : ";
    while (num !=0)
    {
        temp=num%10;
        sum=sum+temp;
        num=num/10;

    }
    cout<<sum;
    
    return 0;
}