#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    float sum = 0.0, i,term=0.0;
    cout << "\nEnter the value of n : ";
    cin >> n;
    for (i = 1.0; i <= n; i++)
    {
        term=pow(i,i);
        sum=sum+(term/i);
    }
    cout << "\nThe sum of series 1/1 + 2^2/2....." << n<<"^"<<n<<"/"<<n << " : " << sum;

    return 0;
}