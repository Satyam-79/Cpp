#include <iostream>
using namespace std;
int main()
{
    int angle;
    cout << "Enter the angle: ";
    cin >> angle;
    while (angle>360)
    {
        angle=angle-360;
    }
    // cout << angle;
    if (angle>0&&angle<=90)
    {
        cout<<"Angle is in First Quadrant";
    }

    if (angle>90&&angle<=180)
    {
        cout<<"Angle is in Second Quadrant";
    }

    if (angle>180&&angle<=270)
    {
        cout<<"Angle is in Third Quadrant";
    }

    if (angle>270&&angle<=360)
    {
        cout<<"Angle is in Forth Quadrant";
    }

    return 0;
}