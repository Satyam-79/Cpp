#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] > x)
            return binarySearch(array, x, low, mid - 1);

        return binarySearch(array, x, mid + 1, high);
    }

    return -1;
}

int main(void)
{
    int n, x;
    cout << "Enter number of element : ";
    cin >> n;
    cout << "Enter the elements : ";
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Enter element to be search : ";
    cin >> x;
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}