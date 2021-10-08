#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int pow1 = 1;
    while (pow1 < 4)
    {

        float b = pow(10, pow1);
        cout << b << endl;
        pow1++;
    }
    return 0;
}