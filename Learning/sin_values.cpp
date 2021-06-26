#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float angle = 0, radian = 0, difference = (float)(22 * 15) / (7 * 180);
    for (radian = 0; radian <= (float)44 / 7; radian)
    {
        cout << "Value of Sin(" << angle << ") is: " << sin(radian) << endl;
        angle = angle + 15;
        // cout<<radian<<endl;
        radian = radian + difference;
    }

    return 0;
}