#include <iostream>
using namespace std;
int main()
{
    int i, n, num, pos, arr[10];
    cout << "\n Enter the number of element in the array : ";
    cin >> n;
    cout << "\n Enter the elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\n Enter the number to be inserted : ";
    cin >> num;
    cout << "\n Enter the position at which number is added : ";
    cin >> pos;
    for (i = n; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    cout << "\n The array after insertion : ";
    for (i = 0; i < n + 1; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}