#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum = 0.0, i;
    cout << "\nEnter the value of n : ";
    cin >> n;
    for (i = 1.0; i <= n; i++)
    {
        sum = sum + (1 / (i*i));
    }
    cout << "\nThe sum of series 1/1^2 + 1/2^2.....1/" << n*n << " : " << sum;

    return 0;
}