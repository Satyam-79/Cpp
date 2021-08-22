#include <iostream>
using namespace std;
int gcd(int, int);
int main()
{
    int num1, num2;
    cout << "\n Enter two number : ";
    cin >> num1 >> num2;
    cout << "\n GCD of " << num1 << " and " << num2 << " is : " << gcd(num1, num2) << endl;

    return 0;
}
int gcd(int x, int y)
{
    int rem;
    rem = x % y;
    if (rem == 0)
        return y;
    else
        return (gcd(y, rem));
}