#include <iostream>
#include <stdlib.h>
using namespace std;
void matrix_input(int array1[5][5], int, int);
int main()
{
    int rows1, cols1, rows2, cols2, res_rows, res_cols;
    int mat1[5][5], mat2[5][5], res_mat[5][5] = {0};
    cout << "\n Enter the number of rows and columns in the first matrix : ";
    cin >> rows1 >> cols1;
    cout << "\n Enter the number of rows and columns in the second matrix : ";
    cin >> rows2 >> cols2;
    if (cols1 != rows2)
    {
        cout << "\n The no of column in first matrix should be equal to rows of second matrix.";
        exit(1);
    }
    res_rows = rows1, res_cols = cols2;
    cout << "\n Enter the element of first matrix : ";
    matrix_input(mat1, rows1, cols1);
    cout << "\n Enter the element of second matrix : ";
    matrix_input(mat2, rows2, cols2);
    for (int i = 0; i < res_rows; i++)
    {
        for (int j = 0; j < res_cols; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                res_mat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "\n The element of product matrix are : ";
    for (int i = 0; i < res_rows; i++)
    {
        cout << "\n";
        for (int j = 0; j < res_cols; j++)
        {
            cout << res_mat[i][j] << "\t";
        }
    }

    return 0;
}

void matrix_input(int array1[5][5], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array1[i][j];
        }
    }
}