#include <iostream>
using namespace std;
int main()
{
    int arr[2][2] = {12, 34, 56, 32};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        cout << "\n";
        for (j = 0; j < 2; j++)
        {
            cout << "\t" << arr[i][j];
        }
    }

    return 0;
}