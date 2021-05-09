#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    if (a>b)
    {
    if(a>c)
        cout<<a<<" is greater than "<<b<<" and "<<c;
    else
        cout<<c<<" is greater than "<<a<<" and "<<b;
    }
    else if (b>c)
        cout<<b<<" is greater than "<<a<<" and "<<c;
    else if (c>b)
        cout<<c<<" is greater than "<<a<<" and "<<b;
        else
        cout<<"Three numbers are equal";
    return 0;
}