#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if (number != 0)
    {
        while (number != 1)
        {
            number = number / 2;
            // cout << number << " ";  trying
            if (number > 2 && (number % 2) != 0)
            {
                cout << "Number is not a power of 2";
                break;
            }
        }
        if (number == 1 || (number % 2) == 0)
        {
            cout << "Number is a power of 2";
        }
    }
    else
        cout << "Number is zero.";

    return 0;
}