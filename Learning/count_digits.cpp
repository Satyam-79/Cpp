#include <iostream>
using namespace std;
int main()
{
    int number, digit = 0, temp = 0;
    cout << "\nEnter any number : ";
    cin >> number;
    while (number != 0)
    {
        number = number / 10;
        temp++;
        // cout<<"\n"<<number;
    }
    cout << "\nNumber of digits : " << temp;

    return 0;
}