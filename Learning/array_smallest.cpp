#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n, arr[20], small = 0;
    cout << "\nEnter the number of element in array : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    small = arr[0];
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < small)
        {
            small = arr[j];
        }
    }
    cout << "\nThe largest number is : " << small;

    return 0;
}