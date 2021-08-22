#include <iostream>
using namespace std;
int factorial(int);
int main()
{
    int num;
    cout << "\n Enter any number : ";
    cin >> num;
    cout << "\n factorial of " << num << " is : " << factorial(num);

    return 0;
}
int factorial(int n)
{
    if (n == 1)
        return 1;
    return (n * factorial(n - 1));
}