#include <iostream>
using namespace std;
void merge(int a[], int, int, int);
void merge_sort(int a[], int, int);
int main()
{
    int arr[10], n;
    cout << "\n Enter the number of element in the array : ";
    cin >> n;
    cout << "\n Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, 0, n - 1);
    cout << "\n The sorted array is : \n";
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << arr[i];
    }

    return 0;
}
void merge(int arr[], int beg, int mid, int end)
{
    int i = beg, j = mid + 1, index = beg, temp[10], k;
    while ((i <= mid) && (j <= end))
    {
        if (arr[i] < arr[j])
        {
            temp[index] = arr[i];
            i++;
        }
        else
        {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if (i > mid)
    {
        while (j <= end)
        {
            temp[index] = arr[j];
            j++;
            index++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temp[index] = arr[i];
            i++;
            index++;
        }
    }
    for (int k = beg; k < index; k++)
    {
        arr[k] = temp[k];
    }
}
void merge_sort(int arr[], int beg, int end)
{
    int mid;
    if (beg < end)
    {
        mid = (beg + end) / 2;
        merge_sort(arr, beg, mid);
        cout << "\n  beg : " << beg << "\t  mid : " << mid << "\t end : " << end;
        merge_sort(arr, mid + 1, end);
        cout << "\n--beg : " << beg << "\t--mid+1 : " << mid + 1 << "\t --end : " << end;
        merge(arr, beg, mid, end);
    }
}