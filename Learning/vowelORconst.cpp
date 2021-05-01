#include <iostream>
using namespace std;

int main()
{
    char c;
    int IsLowercaseVowel, IsUpperCaseVowel;
    cout << "Enter an alphabet:";
    cin >> c;
    IsLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    IsUpperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (IsLowercaseVowel || IsUpperCaseVowel)
    {
        cout << c << " is a vowel.";
    }
    else
    {
        cout << c << " is a constant.";
    }
    return 0;
}