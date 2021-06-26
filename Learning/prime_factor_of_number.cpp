#include <iostream>
using namespace std;
int main()
{
    int number, prime, temp;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Prime factors are: ";
    for (int i = 2; i <= number; i)
    {
        if (number % i == 0)
        {
            number = (number / i);
            cout << i << ", ";
        }
        else
            i++;
    }

    return 0;
}