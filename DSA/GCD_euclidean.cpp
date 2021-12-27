#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    GCD(b, a % b);
}
int main()
{
    int a = 1, b = 1;
    // cout << "Enter two number for GCD : ";
    cin >> a >> b;
    cout << GCD(a, b);

    return 0;
}