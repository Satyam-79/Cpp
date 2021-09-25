#include <iostream>
using namespace std;
int main()
{
    char str[100], lowerString[100];
    int i = 0;
    cout << "\n Enter the string : ";
    cin.getline(str, 100);
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            lowerString[i] = str[i] + 32;
        else
            lowerString[i] = str[i];
        i++;
    }
    lowerString[i] = '\0';
    cout << "\n The string converted into upper case is : ";
    puts(lowerString);

    return 0;
}