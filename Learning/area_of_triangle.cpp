#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, area, S;
    cout << "enter the sidea of triangle: " << endl;
    cin >> a >> b >> c;
    S = (a + b + c) / 2;
    area = sqrt(S * (S - a) * (S - b) * (S - c));
    cout << "area = " << area;

    return 0;
}
