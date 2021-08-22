#include <iostream>
using namespace std;
int factorial(int);
int main()
{
    int n, f, i;
    float result = 0.0;
    cout << "enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        result += 1 / (float)factorial(i);
    }
    cout << "\n The sum of series 1/1! + 1/2! + 1/3! + .... = " << result;

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