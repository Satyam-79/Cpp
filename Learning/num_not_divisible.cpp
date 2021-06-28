#include <iostream>
using namespace std;
int main()
{
    for (int i = 2; i <= 100; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<" is not divisible by 2"<<endl;
        }
        if (i%3!=0)
        {
            cout<<i<<" is not divisible by 3"<<endl;
        }
        if (i%2!=0&&i%3!=0)
        {
            cout<<i<<" is not divisible by 2 as well as 3"<<endl;
        }
        
    }
    
    
    return 0;
}