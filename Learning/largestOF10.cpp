#include <iostream>
using namespace std;
int main()
{
    int i=0,large=-1,num;
    while (i<=10)
    {
        cout<<"\nEnter the number : ";
        cin>>num;
        large=num>large?num:large;
        i++;

    }
    cout<<"\nThe Largest of ten numbers entered is : "<<large;
    
    return 0;
}