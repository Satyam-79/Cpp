#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n, arr[20], large = 0;
    cout << "\n Enter the number of element in array : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    large = arr[0];
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > large)
        {
            large = arr[j];
        }
    }
    cout << "\n The largest number is : " << large;

    return 0;
}