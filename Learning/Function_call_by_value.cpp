#include <iostream>
using namespace std;
int add(int n);
int main()
{
    int num = 2;
    cout << "\n The value of num before calling the function = " << num;
    add(num);
    cout << "\n The value of num after calling the function = " << num;
    num = add(num);
    cout << "\n The value of num after right assign. operator(=) calling the function = " << num;
}

int add(int n)
{
    n = n + 10;
    cout << "\n The value of num in the called function = " << n;
    return n;
}