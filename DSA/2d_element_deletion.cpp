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
        cin.ignore(20, '\n');
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
    cin.ignore(20, '\n');

    input(matrix, m, n);
    if (m != x && n != y)
    {
        cout << "\nEnter the location for deletion of element.\nEnter the row number : ";
        cin >> row_loc;
        cin.ignore(20, '\n');
        cout << "Enter the column number : ";
        cin >> col_loc;

        if (col_loc > n || row_loc > m)
        {
            cout << "\nEntered location out of Row or column.";
        }
        else if (col_loc <= n && row_loc <= m)
        {
            for (int j = n; j >= col_loc; j--)
            {
                matrix[row_loc - 1][j - 1] = matrix[row_loc - 1][j];
                // cout << row_loc - 1 << j ;
            }
            matrix[row_loc - 1][col_loc - 1] = 0;
            output(matrix, m, n);
        }
    }

    // output(matrix, row_loc < m + 1 ? m : row_loc, col_loc < n ? n + 1 : col_loc);
    // output(matrix, m, n);
    return 0;
}