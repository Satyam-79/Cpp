#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char c;
    cout << "Ente any character in upper case: ";
    cin >> c;
    cout << "the character in lower case: " << (char)tolower(c);

    return 0;
}
