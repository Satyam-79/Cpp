#include <iostream>
using namespace std;
int main()
{
    int arr[10], num, n, beg, mid, end, found = 0;
    cout << "\nEnter the number of elements in the array : ";
    cin >> n;
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number has to be searched : ";
    cin >> num;
    beg = 0, end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == num)
        {
            cout << "\n"
                 << num << " is present in the array at position = " << mid;
            found = 1;
            break;
        }
        if (arr[mid] < num)
        {
            beg = mid + 1;
        }
        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
    }
    if (beg > end && found == 0)
    {
        cout << "\n"
             << num << " DOES NOT EXIST IN ARRAY.";
    }

    return 0;
}