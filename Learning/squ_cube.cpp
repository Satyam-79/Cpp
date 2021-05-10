#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"\nEnter the value of n : ";
    cin>>n;
    cout<<"\n -------------------------------------------------";
    do
    {
        cout<<"\n | \t "<<i<<"\t| \t "<<pow(i,2)<<"\t | \t "<<pow(i,3)<<" \t |";
        i++;
    } while (i<=n);
    cout<<"\n -------------------------------------------------";
    
    

    return 0;
}