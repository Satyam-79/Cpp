#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100], substr[100];
    int n;
    cout << "\n Enter the string : ";
    cin.getline(str, 100);
    cout << "\n Enter the character to be print from last : ";
    cin >> n;
    int j = strlen(str) - n;
    int i = 0;
    while (str[j] != '\0')
    {
        substr[i] = str[j];
        i++;
        j++;
    }
    substr[i] = '\0';
    cout << "\n The substring is : ";
    puts(substr);

    return 0;
}