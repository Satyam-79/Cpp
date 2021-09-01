#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[5][10], temp[20];
    int n;
    cout << "\n Enter the number of student : ";
    cin >> n, i, j;
    for (int i = 0; i < n; i++)
    {
        cout << "\n Enter the name of the " << i + 1 << "th student : ";
        cin.ignore();
        cin.getline(name[i], 100);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1, j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                /* code */
            }
        }
    }

    return 0;
}