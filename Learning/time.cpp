#include <iostream>
using namespace std;
int main()
{
    int a, y;
    cin >> a;
    int x[50];
    for (int j = 0; j < a; j++)
    {
        cin >> x[j];
    }
    for (int j = 0; j < a; j++)
    {
        while (x[j] > 90)
        {
            y = y + 3;
            x[j]--;
        }
        while (x[j] > 20)
        {
            y = y + 6;
            x[j]--;
        }
        while (x[j] > 0)
        {
            y = y + 9;
            x[j]--;
        }
        cout << y;
    }
}