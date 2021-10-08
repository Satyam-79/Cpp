// Radix Sort
#include <iostream>
#include <time.h>
using namespace std;
#define x 10
void input(int arr[x], int n)
{
    srand(time(0));
    int i;
    // cout << "\n Enter the elements of array : ";
    for (i = 0; i < n; i++)
    {
        // cin >> arr[i];
        arr[i] = (rand() % 1000);
    }
}
void output(int arr[x], int n)
{
    cout << "Array is:   ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void output(int arr[x][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}
int maxDig(int arr[x], int n)
{
    int maxx = arr[0], a = 0;
    for (int i = 1; i < n; i++)
        if (arr[i] > maxx)
            maxx = arr[i];
    do
    {
        maxx /= 10;
        ++a;
    } while (maxx != 0);

    return a;
}
void radixSort(int a[x], int maxDig, int n)
{
    int b = 10, count = 0, rem, c;
    while (maxDig > 0)
    {
        int bucket[n][10] = {0};

        while (count < n)
        {
            rem = a[count] % b;
            // cout << rem << " rem" << endl;
            if (b > 10)
                c = rem / (b / 10);
            else
                c = rem;
            bucket[count][c] = a[count];
            count++;
        }
        // output(bucket, n);
        count = 0;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (bucket[j][i] != 0)
                {
                    a[count] = bucket[j][i];
                    ++count;
                }
            }
        }
        // output(a, n);
        // cout << endl;
        // output(bucket, n);
        // cout << endl;
        b *= 10;

        maxDig--;
    }
}
int main()
{
    int a[x], n;
    cout << "\nEnter No. of elements: " << endl;
    cin >> n;
    input(a, n);
    output(a, n);
    int maxDigits = maxDig(a, n);
    radixSort(a, maxDigits, n);
    cout << "\nSorted ";
    output(a, n);
    return 0;
}