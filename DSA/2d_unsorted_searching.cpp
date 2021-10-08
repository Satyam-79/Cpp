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
int Sum(int arr[x][y], int a, int b)
{
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            sum += arr[i][j];
    }
    return sum;
}
void Search(int arr[x][y], int a, int b)
{
    int value, flag = 0;
    cout << "\nEnter the element to be searched : ";
    cin >> value;
    cout << endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] == value)
            {
                ++flag;
                cout << "Location of " << value << " is (" << i + 1 << " , " << j + 1 << ")" << endl;
            }
        }
    }
    if (flag == 0)
        cout << value << " does not exist in matrix.";
}
int main()
{
    int matrix[x][y] = {0}, m, n;

    cout << "\n Enter number of Rows and Columns(max: " << x - 1 << " X " << y - 1 << " ) : ";
    cin >> m >> n;
    cin.ignore(20, '\n');

    input(matrix, m, n);

    cout << "\nTransversing of 2D-array :" << endl;
    output(matrix, m, n);

    Search(matrix, m, n);

    cout << "\nSum of all elements of the 2D-array : " << Sum(matrix, m, n);

    return 0;
}
