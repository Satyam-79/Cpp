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
                cout << "* ";
            }
            cout << endl;
        }
        if (i != 1 && i != num)
        {
            cout << "* ";
            for (int k = 1; k <= num - 2; k++)
            {
                cout << "  ";
            }
            cout << "*" << endl;
        }
        if (i == num)
        {
            for (int j = 1; j <= num; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

    return 0;
}