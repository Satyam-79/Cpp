#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "\nEnter the length of square : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        // cout << "\n i= " << i;
        if (i == 1)
        {
            for (int j = 1; j <= num; j++)
            {
                if (j == i || j == num)
                {
                    cout << "$ ";
                }

                else
                    cout << "* ";
            }
            cout << endl;
        }
        if (i != 1 && i != num)
        {
            cout << "* ";
            for (int k = 0; k < num - 2; k++)
            {
                // cout << "\n k= " << k;

                if (k == i - 2 || k == num - i - 1)
                {
                    cout << "$ ";
                }

                else
                    cout << "  ";
            }
            cout << "*" << endl;
        }
        if (i == num)
        {
            for (int l = 1; l <= num; l++)
            {
                if (l == i || l == 1)
                {
                    cout << "$ ";
                }

                else
                    cout << "* ";
            }
            cout << endl;
        }
    }

    return 0;
}