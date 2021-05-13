#include <iostream>
using namespace std;
int main()
{
    static int count=0;
    int i,j;
    for ( i = 1; i<=5; i++)
    {
        cout<<"\n";
        for ( j = 1; j <= i; j++)
        {
            cout<<count;
            count++;
        }
    }
    return 0;
}