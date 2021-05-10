#include <iostream>
using namespace std;
int main()
{
    int n,m,sum=0;
    cout<<"\nEnter the value of m and n : ";
    cin>>m>>n;
    while (m<=n)
    {
        sum=sum+m;
        m=++m;   
    }
    cout<<"\nSUM = "<<sum;
    
    return 0;
}