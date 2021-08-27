#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, number = 0, digit[10], number_digit;
    cout << "\n Enter the number of digits : ";
    cin >> number_digit;
    for (i = 0; i < number_digit; i++)
    {
        cout << "\n Enter the " << i << "th digit : ";
        cin >> digit[i];
    }
    i = 0;
    while (i < number_digit)
    {
        number = number + digit[i] * pow(10, i);
        i++;
    }

    cout << "\n The number is : " << number;
    return 0;
}