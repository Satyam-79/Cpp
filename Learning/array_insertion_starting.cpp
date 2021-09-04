#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a[50];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }

    int z;
    cout << "enter the number of elements you want to insert";
    cin >> z;

    for (int i = 0; i < x; i++)
    {
        a[x + z - i - 1] = a[x - 1 - i];
    }

    cout << "Enter elements : ";
    for (int i = 0; i < z; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < x + z; i++)
    {
        cout << a[i] << " ";
    }
}