#include <iostream>
using namespace std;
const int x = 11;
const int y = 11;
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
    int matrix[x][y] = {0}, m, n, row_loc, col_loc, value = 0, p, q;
    cout << "\n Enter number of Rows and Columns(max: " << x - 1 << " X " << y - 1 << " ) : ";

    cin >> m >> n;
    cin.ignore(20, '\n');

    input(matrix, m, n);
    if (m != x && n != y)
    {
        cout << "\nEnter the location of insertion of element.\nEnter the row number : ";
        cin >> row_loc;
        cin.ignore(20, '\n');
        cout << "Enter the column number : ";
        cin >> col_loc;
        cin.ignore(20, '\n');
        cout << "Enter the value of element : ";
        cin >> value;
        if (col_loc > n)
        {
            matrix[row_loc - 1][col_loc - 1] = value;
        }
        else if (col_loc <= n)
        {
            for (int j = n; j >= col_loc; j--)
            {
                matrix[row_loc - 1][j] = matrix[row_loc - 1][j - 1];
                // cout << row_loc - 1 << j ;
            }
            matrix[row_loc - 1][col_loc - 1] = value;
        }
    }

    output(matrix, row_loc < m + 1 ? m : row_loc, col_loc < n ? n + 1 : col_loc);
    return 0;
}
