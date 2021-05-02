#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 3, b = 56, c = 5434;
    cout << "a Without setw: " << a << endl;
    cout << "b Without setw: " << b << endl;
    cout << "c Without setw: " << c << endl;

    cout << "a With setw: " << setw(4) << a << endl;
    cout << "b With setw: " << setw(4) << b << endl;
    cout << "c With setw: " << setw(4) << c << endl;
    return 0;
}
