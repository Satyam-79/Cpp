#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int x, y;
    x = a % 10;
    while (a > 10)
    {
        a = a / 10;
        y = a;
    }
    cout << "sum is " << x + y;

    return 0;
}
