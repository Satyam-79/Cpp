#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter grade O, A, B, C, F : ";
    cin >> grade;
    switch (grade)
    {
    case 'O':
        cout << "\n Outstanding";
        break;
    case 'A':
        cout << "\n Excellent";
        break;
    case 'B':
        cout << "\n Good";
        break;
    case 'C':
        cout << "\n Fair";
        break;
    case 'F':
        cout << "\n Fail";
        break;
    default:
        cout << "\n Invalid Grade";
        break;
    }

    return 0;
}