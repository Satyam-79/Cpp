#include <iostream>
using namespace std;
int main()
{
    int i, n, pos, arr[10];
    cout << "\n Enter the number of element in the array : ";
    cin >> n;
    cout << "\n Enter the elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nArray : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n Enter the position from which number is deleted : ";
    cin >> pos;
    for (i = pos - 1; i < n; i++)
    {
        // cout << i;
        arr[i] = arr[i + 1];
    }
    arr[i - 1] = 0;
    cout << "\n The array after deletion : ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}