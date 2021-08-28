#include <iostream>
using namespace std;
void read_array(int arr1[], int);
void display_array(int arr3[], int);
void merge_array(int arr3[], int, int arr1[], int arr2[], int);
void reverse_array(int my_arr[], int);
int main()
{
    int arr1[10], arr2[10], arr3[20], n, m, t;
    cout << "\n Enter the sizeof first array : ";
    cin >> m;
    read_array(arr1, m);
    cout << "\n Enter the size of second array : ";
    cin >> n;
    read_array(arr2, n);
    t = m + n;
    merge_array(arr3, m, arr1, arr2, n);
    cout << "\n The merge array is : ";
    display_array(arr3, t);
    cout << "\n\n The merge array in reverse order : ";
    reverse_array(arr3, t);

    return 0;
}
void read_array(int my_array[10], int n)
{
    int i;
    cout << "\n Enter the elements of array : ";
    for (i = 0; i < n; i++)
    {
        cin >> my_array[i];
    }
}
void merge_array(int my_array1[], int m, int my_array2[], int my_array3[], int n)
{
    int i, j = 0;
    for (i = 0; i < m; i++)
    {
        my_array1[j] = my_array2[i];
        j++;
    }
    for (i = 0; i < m; i++)
    {
        my_array1[j] = my_array3[i];
        j++;
    }
}
void display_array(int my_array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << my_array[i] << " ";
    }
}
void reverse_array(int my_array[], int m)
{
    int i;
    for (i = m - 1; i >= 0; i--)
    {
        cout << my_array[i] << " ";
    }
}