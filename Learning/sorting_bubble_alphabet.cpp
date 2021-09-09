#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char word[20], temp = 0;
    int i = 0, n = 0;
    cout << "\nEnter the Word : ";
    cin.getline(word, 20);
    n = strlen(word);
    for (i = 0; i < n; i++)

    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (word[j] > word[j + 1])
            {
                temp = word[j + 1];
                word[j + 1] = word[j];
                word[j] = temp;
            }
        }
    }

    puts(word);

    return 0;
}