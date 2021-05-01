#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float r;
    double a, c;
    cout << "enter radius : ";
    cin >> r;
    c = 2 * 3.14 * r;
    a = c * r;
    cout.precision(5);
    cout << "Area = " << a << endl
         << "Circumference = " << c << endl;

    return 0;
}
