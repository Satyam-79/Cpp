#include <iostream>
using namespace std;
int main()
{
    int n, arr[20], temp, small = 0, small_pos = 0, large = 0, large_pos = 0;
    cout << "\n Enter the number of elements in the array : ";
    cin >> n;
    cout << "\n Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    small = large = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            small_pos = i;
        }
        if (arr[i] > large)
        {
            large = arr[i];
            large_pos = i;
        }
    }
    cout << "\n The smallest number is : " << small;
    cout << "\n Postition of smallest number in array : " << small_pos;
    cout << "\n The largest number is : " << large;
    cout << "\n Postition of largest number in array : " << large_pos;
    temp = arr[large_pos];
    arr[large_pos] = arr[small_pos];
    arr[small_pos] = temp;
    cout << "\n The new array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}