#include <iostream>
#include <stdlib.h>
using namespace std;
#define x 11
void input(int arr[x][x], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << "\n Enter the values of row " << i + 1 << " : ";
        for (int j = 0; j < a; j++)
        {
            cin >> arr[i][j];
        }
        cin.ignore(20, '\n');
    }
}
void output(int arr[x][x], int a)
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
void unitMatrix(int arr1[x][x], int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == j)
            {
                arr1[i][j] = 1;
            }
            else
            {
                arr1[i][j] = 0;
            }
        }
    }
}
int main()
{
    int a, arr[x][x];
    cout << "\nEnter length of square matrix(max:10) : ";
    cin >> a;
    input(arr, a);
    output(arr, a);
    unitMatrix(arr, a);
    cout << "Unit matrix is : " << endl;
    output(arr, a);
}