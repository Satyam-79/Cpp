#include <iostream>
using namespace std;
int main()
{
    char str[1000];
    int i = 0, m, n, lineCount = 0;
    cout << "\n Enter * to end.";
    cout << "\n Enter the text : ";
    str[i] = getchar();
    while (str[i] != '*')
    {
        i++;
        str[i] = getchar();
    }
    str[i] = '\0';
    cout << "\n Enter the line number from which to copy : ";
    cin >> m;
    cout << "\n Enter the line number till which to copy : ";
    cin >> n;
    i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        if (lineCount == m)
        {
            j = i;
            while (n > 0 && str[j] != '\0')
            {
                cout.put(str[j]);
                j++;
                if (str[j] == '\n')
                {
                    n--;
                    lineCount++;
                }
            }
        }
        else
        {
            i++;
            if (str[i] == '\n')
            {
                lineCount++;
            }
        }
    }

    return 0;
}