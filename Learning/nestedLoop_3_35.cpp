#include <iostream>
using namespace std;
int n=5;
int main()
{
    int i,j,k;
    for ( i = 1; i <= n; i++)
    {
        for ( k = n; k >= i; k--)
        {
            cout<<" ";
        }
        for ( j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
    
    
    return 0;
}