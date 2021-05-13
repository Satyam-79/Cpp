#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"\nEnter any number : ";
    cin>>n;
    cout<<"\nMultiplication table of "<<n;
    cout<<"\n**********************************";
for ( i = 0; i <= 20; i++)
{
    cout<<"\n "<<n<<" X "<<i<<" = "<<(n*i);
}
    return 0;
}