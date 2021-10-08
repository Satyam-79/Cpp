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
    int matrix[x][y] = {0}, m, n, row_loc, col_loc, value = 0, p, flag = 0, q;
    cout << "\n Enter number of Rows and Columns(max: " << x - 1 << " X " << y - 1 << " ) : ";

    cin >> m >> n;
    cin.ignore(20, '\n');

    input(matrix, m, n);

    cout << "\nTransversing of 2D-array :" << endl;
    output(matrix, m, n);

    cout << "\nEnter the element to be searched : ";
    cin >> value;
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == value)
            {
                ++flag;
                cout << "Location of " << value << " is (" << i + 1 << " , " << j + 1 << ")" << endl;
            }
        }
    }

    if (flag == 0)
        cout << value << " does not exist in matrix.";

    return 0;
}
