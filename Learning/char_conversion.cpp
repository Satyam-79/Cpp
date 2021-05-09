#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter any character : ";
    cin >> c;
    if (c >= 'A' && c <= 'Z')
    {
        c = c + 32;
        cout << "\nThe upper case character is now converted into lower case : " << c;
    }
    else
    {
        c = c - 32;
        cout << "\nThe lower case character is now converted into Upper case : " << c;
    }
    return 0;
}
