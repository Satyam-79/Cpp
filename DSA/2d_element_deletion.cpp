#include <iostream>
#include <time.h>
using namespace std;
const int x = 11;
const int y = 11;
void input(int arr[x][y], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        srand(time(0));
        // cout << "\n Enter the values of row " << i + 1 << " : ";
        for (int j = 0; j < b; j++)
        {
            // cin >> arr[i][j];
            arr[i][j] = (rand() * (i + 1) * (j + 1) % 100);
        }
        // cin.ignore(20, '\n');
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
    int matrix[x][y] = {0}, m, n, row_loc, col_loc;
    cout << "\n Enter number of Rows and Columns(max: " << x - 1 << " X " << y - 1 << " ) : ";

    cin >> m >> n;
    cin.ignore(20, '\n');

    input(matrix, m, n);
    cout << "Before Deletion :" << endl;
    output(matrix, m, n);

    if (m != x && n != y)
    {
        cout << "\nEnter the location for deletion of element.\nEnter the row number : ";
        cin >> row_loc;
        cin.ignore(20, '\n');
        cout << "Enter the column number : ";
        cin >> col_loc;

        if (col_loc > n || row_loc > m || col_loc == 0 || row_loc == 0)
        {
            cout << "\nEntered location out of Row or column.";
        }
        else
        {
            for (int j = col_loc - 1; j < n; j++)
            {
                matrix[row_loc - 1][j] = matrix[row_loc - 1][j + 1];
            }
            matrix[row_loc - 1][n - 1] = 0;
            cout << "\nAfter Deletion : " << endl;
            output(matrix, m, n);
        }
    }

    return 0;
}
