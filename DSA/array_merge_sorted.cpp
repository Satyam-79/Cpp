#include <iostream>
using namespace std;
int main()
{
    int arr1[10], arr2[10], arr3[20];
    int i, n1, n2, m, index = 0;
    int index_first = 0, index_second = 0;
    cout << "\n Enter the number of element in array1 : ";
    cin >> n1;
    cout << "\n Enter the elements of first array : ";
    for (i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "\n Enter the number of element in array2 : ";
    cin >> n2;
    cout << "\n Enter the elements of second array : ";
    for (i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    m = n1 + n2;
    while (index_first < n1 && index_second < n2)
    {
        if (arr1[index_first] < arr2[index_second])
        {
            arr3[index] = arr1[index_first];
            index_first++;
        }
        else
        {
            arr3[index] = arr2[index_second];
            index_second++;
        }
        index++;
    }
    if (index_first == n1)
    {
        while (index_second < n2)
        {
            arr3[index] = arr2[index_second];
            index++;
            index_second++;
        }
    }
    if (index_second == n2)
    {
        while (index_first < n1)
        {
            arr3[index] = arr1[index_first];
            index++;
            index_first++;
        }
    }
    cout << "\n*****************************";
    cout << "\n The merged array is : ";
    for (i = 0; i < m; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}