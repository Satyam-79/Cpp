#include <iostream>
using namespace std;

int main()
{
#ifndef OUTLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int savings;
    cin >> savings;

    if (savings > 5000)
    {
        if (savings > 10000)
        {
            cout << "Roadtrip with neha\n";
        }
        else
        {
            cout << "shoping with neha\n";
        }
    }
    else if (savings > 2000)
    {
        cout << "Rashmi\n";
    }
    else
    {
        cout << "Friends\n";
    }

    return 0;
}