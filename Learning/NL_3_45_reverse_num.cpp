#include <iostream>
using namespace std;
int main()
{
    int num,temp;
    cout<<"\nEnter the number : ";
    cin>>num;
    cout<<"\nReverse number : ";
    while (num !=0)
    {
        temp=num%10;
        cout<<temp;
        num=num/10;

    }
    
    return 0;
}