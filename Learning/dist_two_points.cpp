#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2;
    float dist;
    cout << "co-ordinats of first point: ";
    cin >> x1 >> y1;
    cout << "co-ordinats of second point: ";
    cin >> x2 >> y2;
    dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    cout.precision(3);
    cout << "dist = " << dist;
    return 0;
}
