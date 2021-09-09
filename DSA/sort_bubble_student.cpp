#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[5][10], temp[20];
    int n;
    cout << "\n Enter the number of student : ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "\n Enter the name of the " << i + 1 << "th student : ";
        cin.getline(name[i], 100);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }
    cout << "\n Names of students as stored in alphabetical order : ";
    for (int i = 0; i < n; i++)
    {
        puts(name[i]);
    }

    return 0;
}