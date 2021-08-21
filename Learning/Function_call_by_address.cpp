#include <iostream>
using namespace std;
void add(int *n);
int main()
{
    int num = 2;
    cout << "\n The value of num before calling function = " << num;
    add(&num);
    cout << "\n The value of num after calling function = " << num;

    return 0;
}
void add(int *n)
{
    *n = *n + 10;
    cout << "\n The value of num in the called function = " << *n;
}