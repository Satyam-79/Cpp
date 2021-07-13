#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "\nEnter the length of square : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= num; j++)
            {
                if (j == i)
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
            for (int k = 1; k <= num - 2; k++)
            {
                if (k == i - 1)
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
                if (l == i)
                {
                    cout << "$";
                }

                else
                    cout << "* ";
            }
            cout << endl;
        }
    }

    return 0;
}