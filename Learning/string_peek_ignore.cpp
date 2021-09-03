#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[20];
    int i = 0;
    cout << "\n Enter a string (Press . to stop): ";
    cin.get(str[i]);
    while (str[i] != '.')
    {
        while (cin.peek() == ' ')
        {
            cin.ignore(1, ' ');
        }
        i++;
        cin.get(str[i]);
    }

    str[i] = '\0';
    // cout.write(str, 10);
    puts(str);

    return 0;
}