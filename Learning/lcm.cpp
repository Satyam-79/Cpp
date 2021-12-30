#include <iostream>
using namespace std;
long long int lcm(long long int a, long long int b)
{
    long long int n = a > b ? a : b;
    for (long long int i = 1; i < n; i++)
    {
        if (a % n)
        {
        }
    }
}
int main()
{
    long long int num1, num2;
    cin >> num1 >> num2;
    cout << lcm(num1, num2);

    return 0;
}