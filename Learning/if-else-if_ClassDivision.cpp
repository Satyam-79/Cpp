#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "\nEnter the marks obtained : ";
    cin >> marks;

    if (marks >= 75)
        cout << "\n DISTINCTION";
    else if (marks >= 60 && marks < 75)
        cout << "\n I Division";
    else if (marks >= 50 && marks < 60)
        cout << "\n II Division";
    else if (marks >= 40 && marks < 50)
        cout << "\n III Division";
    else
        cout << "\nFAIL";
    return 0;
}