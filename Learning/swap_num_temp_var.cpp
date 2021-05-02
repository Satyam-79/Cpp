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
    cout << "First is: " << a << "  Second is: " << b;
    return 0;
}
