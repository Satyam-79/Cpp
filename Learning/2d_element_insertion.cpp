#include <iostream>
using namespace std;
const int x = 10;
const int y = 10;
void input(int arr[x][y], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        cout << "\n Enter the values of row " << i + 1 << " : ";
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = b; j < y; j++)
        {
            arr[i][j] = 0;
        }
        if (i >= a)
        {
            for (int j = 0; j < b; j++)
            {
                arr[i][j] = 0;
            }
        }
    }
}
void output(int arr[x][y], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    int matrix[x][y], m, n, row_loc, col_loc, value = 0, p, q;
    cout << "\n Enter number of Rows and Columns(max: " << x << " X " << y << " ) : ";
    cin >> m >> n;
    input(matrix, m, n);
    if (m != x && n != y)
    {
        cout << "\nEnter the location of insertion of element.\nEnter the row number : ";
        cin >> row_loc;
        cout << "Enter the column number : ";
        cin >> col_loc;
        cout << "Enter the value of element : ";
        cin >> value;
        if (col_loc > n)
        {
            matrix[row_loc - 1][col_loc - 1] = value;
        }
        else if (col_loc <= n)
        {
            for (int j = n; j > col_loc; j--)
            {
                matrix[row_loc - 1][j + 1] = matrix[row_loc - 1][j];
            }
            matrix[row_loc - 1][col_loc - 1] = value;
        }
    }

    output(matrix, m + 1, n + 2);
    return 0;
}
