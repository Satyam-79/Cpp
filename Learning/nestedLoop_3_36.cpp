#include <iostream>
using namespace std;
int n=5;
int main()
{
    int i,j,k,l;
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
        for ( l = j-2; l >0; l--)
        {
            cout<<l;
        }
        
        cout<<endl;
        
    }
    
    
    return 0;
}