#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a[50], b[50], c;
    for (int j = 0; j < x; j++)
    {
        cin >> a[j] >> b[j];
    }
    for (int j = 0; j < x; j++)
    {
        c = a[j] % b[j];
        cout << c << endl;
    }
}