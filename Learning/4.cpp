#include <iostream>
using namespace std;

int glo = 1;
void sum()
{
    int a;
    cout << glo;
}

int main()
{
    int glo = 2;
    glo = 3;
    bool bol = false;
    sum();
    cout << glo << bol;
    // int a = 14, b = 15;
    // float pi = 3.14;
    // char c = 'd';
    // cout << "This is tutorial 4.\nHere the value of a is " << a << ".\nThe value of b is: " << b;
    // cout << "\nThe value of pi is: " << pi;
    // cout << "\nThe value of c is: " << c;

    return 0;
}