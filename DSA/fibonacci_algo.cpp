#include <iostream>
using namespace std;
long long Fibonacci(int n)
{
    long long arr[2];
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    if (n <= 1)
    {
        return 1;
    }

    for (int i = 2; i < n; i++)
    {
        arr[0] = arr[1];
        arr[1] = arr[2];
        arr[2] = arr[1] + arr[0];
    }

    return arr[2];
}
int main()
{
    int n = 0;
    // cout << "Enter N th Number for Fibonacci : ";
    cin >> n;
    cout << Fibonacci(n);

    return 0;
}