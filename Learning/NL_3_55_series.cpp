#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i;
    float sum = 0.0, term = 0.0;
    cout << "\nEnter the value of n : ";
    cin >> n;
    for (i = 1.0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            term = pow(i, 2);
            sum = sum + term;
        }
    }

    cout << "\nThe sum of series 2^2 + 4^2....." << term << " : " << sum;

    return 0;
}