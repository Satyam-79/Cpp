#include <iostream>
using namespace std;

int search(int array[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}
int main()
{
    int element, n;
    cout << "Enter number of element : ";
    cin >> n;
    cout << "Enter the elements : ";
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter element to be search : ";
    cin >> element;
    int result = search(array, n, element);
    (result == -1) ? cout << "\nElement not found" : cout << "\nElement found at index: " << result;
}
