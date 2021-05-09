#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c;
    float D,deno,root1,root2;
    cout<<"\nEnter the values of a, b, c : ";
    cin >>a>>b>>c;
    D=(b*b)-(4*a*c);
    deno=2*a;
    if(D>0)
{
    cout<<"\nReal Roots";
    root1=(-b+sqrt(D))/deno;
    root2=(-b-sqrt(D))/deno;
    cout<<"\nRoots are "<<root1<<" and "<<root2;
}
else
cout<<"\nRoots are imaginory";

    return 0;
}