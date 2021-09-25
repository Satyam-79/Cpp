#include <iostream>
// #include <stdlib.h>
using namespace std;
int main()
{
    int n, arr[20], revarr[20], sumarr[20];
    cout << "\nEnter the number of element in array : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
    }
    cout << "Array is\t     : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        revarr[i] = arr[n - i - 1];
    }
    cout << "\nReversed array is    : ";
    for (int i = 0; i < n; i++)
    {
        cout << revarr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        sumarr[i] = arr[i] + revarr[i];
    }
    cout << "\nSum of both array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << sumarr[i] << " ";
    }

    return 0;
}