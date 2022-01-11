#include <iostream>
using namespace std;
long long int GCD(long long int a, long long int b)
{
    if (b == 0)
    {
        return a;
    }
    GCD(b, a % b);
}
int main()
{
    long long int a = 1, b = 1,gcd,lcm;
    // cout << "Enter two number for GCD : ";
    cin >> a >> b;
    gcd= GCD(a, b);
    lcm= a*b;
    lcm /=gcd;
    cout<<lcm;

    return 0;
}