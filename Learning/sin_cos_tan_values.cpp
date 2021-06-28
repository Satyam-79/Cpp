#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int angle = 0;
    float  radian = 0, difference = (float)(22 * 15) / (7 * 180);
    for (radian = 0; radian <= (float)44 / 7; radian)
    {

        // cout.precision(2);
        cout << "Value of Sin(" << angle << ") is: " << sin(radian) << endl;
        cout << "Value of cos(" << angle << ") is: " << cos(radian) << endl;
        cout << "Value of tan(" << angle << ") is: " << tan(radian) << endl<<endl;
        angle = angle + 15;
        // cout<<radian<<endl;
        radian = radian + difference;
    }

    return 0;
}