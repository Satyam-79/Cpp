#include <iostream>
using namespace std;
int main()
{
    int i, n, x;
    cout << "\nEnter total number of element : ";
    cin >> n;

    int *a = new int(n);
    cout << "Enter " << n << " elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Entered elements are : ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << "\nEnter the number of element : ";
    cin >> x;
    int *q = new int(n + x - 1);
    for (i = 0; i < n; i++)
    {
        q[i] = a[i];
    }
    delete[] a;
    cout << "Enter elements : ";
    for (i = n - 1; i < n + x - 1; i++)
    {
        cin >> q[i];
    }
    for (i = 0; i < x + n - 1; i++)
    {
        cout << q[i] << "  ";
    }

    return 0;
}