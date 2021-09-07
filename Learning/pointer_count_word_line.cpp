#include <iostream>
using namespace std;
int main()
{
    char str[100], *pstr = str;
    int chars = 1, lines = 1, words = 1, i = 0;
    cout << "\n Enter the text : ";
    cin.get(str[i]);
    while (str[i] != '*')
    {
        i++;
        cin.get(str[i]);
    }
    str[i] = '\0';

    while (*pstr != '\0')
    {
        if (*pstr == '\n')
        {
            lines++, words++;
        }

        if (*pstr == ' ' && *(pstr + 1) != ' ')
        {
            words++;
        }
        chars++, pstr++;
    }
    cout << "\n number of characters = " << chars;
    cout << "\n number of lines = " << lines;
    cout << "\n number of words = " << words;

    return 0;
}