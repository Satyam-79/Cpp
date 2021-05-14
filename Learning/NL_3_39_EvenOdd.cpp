#include <iostream>
using namespace std;
int main()
{
    int i,m,n;
    cout<<"\nEnter the value of m and n : ";
    cin>>m>>n;
    for(i=m;i<=n;i++)
{
    if(i%2 == 0)
        cout<<"\n "<<i<<" in even";
    else
        cout<<"\n "<<i<<" in odd";
}

    
    return 0;
}