#include <iostream>
using namespace std;

int c = 20;

int main()
{
    int a, b, c;
    cout << "enter value of a: " << endl;
    cin >> a;
    cout << "enter value of b: " << endl;
    cin >> b;
    c = a + b;
    cout << "sum is c " << c << endl;
    cout << "the global c is " << ::c;

    return 0;
}