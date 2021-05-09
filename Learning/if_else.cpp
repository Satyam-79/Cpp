#include <iostream>
using namespace std;
int main()
{
    int a, b, l;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    if (a > b)
        l = a;
    else
        l = b;
    cout << "Large = " << l << endl
         << endl;
    // odd even

    if (a % 2 == 0)
        cout << a << " is even" << endl;
    else
        cout << a << " is odd" << endl;

    if (b % 2 == 0)
        cout << b << " is even" << endl;
    else
        cout << b << " is odd" << endl;

    return 0;
}