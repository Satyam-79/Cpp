#include <iostream>
using namespace std;
int main()
{
    int unit;
    float rate = 0;
    cout << "Enter the unit consumed: ";
    cin >> unit;
    if (unit <= 150)
        rate = unit * 3;
    else if (unit > 150 && unit <= 350)
        rate = (150 * 3) + 100 + (3.75 * (unit - 150));
    else if (unit > 350 && unit <= 450)
        rate = (150 * 3) + (200 * 3.75) + 250 + (4 * (unit - 350));
    else if (unit > 450 && unit <= 600)
        rate = (150 * 3) + (200 * 3.75) + (100 * 4) + 300 + (4.25 * (unit - 450));
    else if (unit > 600)
        rate = (150 * 3) + (200 * 3.75) + (100 * 4) + (150 * 4.25) + 400 + (5 * (unit - 600));

    cout << "Bill amount: " << rate;

    return 0;
}