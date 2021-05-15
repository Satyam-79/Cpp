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
        sum = sum + (i / (i+1));
    }
    cout << "\nThe sum of series 1/2 + 2/3....." << n<<"/"<<n+1 << " : " << sum;

    return 0;
}