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
        term=pow(i,3);
        sum=sum+term;
    }
    cout << "\nThe sum of series 1^3 + 2^3....." << n<<"^3"<< " : " << sum;

    return 0;
}