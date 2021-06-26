#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    cout << "enter one Number ";
    cin >> number1;
    cout << "enter one Number ";
    cin >> number2;
    if (number2 % number1 == 0)
    {
        cout << number1 << " is a multiple of " << number2;
    }
    else
        cout << number1 << " is a not multiple of " << number2;

    return 0;
}