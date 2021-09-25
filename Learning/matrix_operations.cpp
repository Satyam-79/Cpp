#include <iostream>
// #include <stdlib.h>
using namespace std;
#define x 11
void input(int a, int arr[x][x])
{
    for (int i = 0; i < a; i++)
    {
        // cout << "\n Enter the values of row " << i + 1 << " : ";
        for (int j = 0; j < a; j++)
        {
            // cin >> arr[i][j];
            arr[i][j] = rand() % 10;
        }
        // cin.ignore(20, '\n');
    }
}
void output(int a, int arr[x][x])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << endl;
}
int countNonZero(int arr[x][x], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                count++;
            }
        }
    }
    return count;
}
int upperDiagonal(int arr[x][x], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}
int productDiagonal(int arr[x][x], int n)
{
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod = arr[i][i] * prod;
    }
    return prod;
}
int main()
{
    int arr[x][x], n;
    cout << "\nEnter length of array(max:10) : ";
    cin >> n;
    input(n, arr);
    output(n, arr);
    cout << "No. of Non-zero elements are : " << countNonZero(arr, n);
    cout << "\nSum of upper diagonal elements : " << upperDiagonal(arr, n);
    cout << "\nProduce of diagonal elements : " << productDiagonal(arr, n);

    return 0;
}