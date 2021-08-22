#include <iostream>
using namespace std;
int factorial(int);
int main()
{
    int n, r;
    float result;
    cout << "\n Enter the value of n and r : ";
    cin >> n >> r;
    result = (float)factorial(n) / factorial(n - r);
    cout << "P(n/r) : P(" << n << "/" << r << ") = " << result;
    return 0;
}

int factorial(int num)
{
    int f = 1;
    for (int i = num; i > 1; i--)
    {
        f = f * i;
    }
    return f;
}