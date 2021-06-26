#include <iostream>
using namespace std;
int main()
{
    int i;
    float f;
    cout<<"Enter FPN ";
    cin>>f;
    cout<<"Enter integer ";
    cin>>i;

    if (f>4.14)
    {
        i=i+10;
        cout <<"FPN "<<f<<"\tinteger "<<i;
    }
    else
        cout <<"FPN "<<f<<"\tinteger "<<i;

    
    return 0;
}