#include <iostream>
using namespace std;
int main()
{
    int num,i,n;
    long int result=1;
    cout<<"\nEnter the number : ";
    cin>>num;
    cout<<"\nPower to calculate : ";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
       result=result*num;
    }
    cout<<"\n pow("<<num<<","<<n<<") = "<<result; 
    
    return 0;
}