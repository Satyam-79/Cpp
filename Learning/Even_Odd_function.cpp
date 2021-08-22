#include <iostream>
using namespace std;
int evenodd(int);
int main()
{
    int num, test;
    cout << "Enter any number : ";
    cin >> num;
    test = evenodd(num);
    if (test == 1)
        cout << "Num is even";
    else
        cout << "Num is odd";
    return 0;
}
int evenodd(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}