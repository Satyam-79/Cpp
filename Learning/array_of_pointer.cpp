#include <iostream>
using namespace std;
int main()
{
    // char *ptr[3] = {"one", "two", "three"};
    char *ptr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << ptr[i] << endl;
    }
    return 0;
}