#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    cout << "\n Enter a number : ";
    cin >> num;
    cout << "\n hexadecimal of " << num;
    cout << setw(10) << setfill('*') << hex << num;
    cout << "\n octral of " << dec << setw(7) << num;
    cout << setw(20) << setfill('*') << oct << num;
    cout << "\n Square root of " << dec << num;
    cout << setw(20) << setfill('*') << setprecision(5) << dec << sqrt(num);

    return 0;
}