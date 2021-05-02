#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter two number: ";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "swaped numbers are: " << a << " " << b;
    return 0;
}
