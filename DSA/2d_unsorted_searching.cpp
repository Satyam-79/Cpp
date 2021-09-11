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
    int matrix[x][y], transpose_matrix[y][x], m, n, row_loc, col_loc, value = 0, p, flag = 0, q;
    cout << "\n Enter number of Rows and Columns(max: " << x << " X " << y << " ) : ";

    cin >> m >> n;
    cin.ignore(20, '\n');

    input(matrix, m, n);

    cout << "\nEnter the element to be searched : " << endl;
    cin >> value;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == value)
            {
                flag = 1;
                row_loc = i + 1;
                col_loc = j + 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
    {
        cout << value << " is on (" << row_loc << " , " << col_loc << " ) place.";
    }
    else
        cout << value << " does not exist in matrix.";

    return 0;
}
