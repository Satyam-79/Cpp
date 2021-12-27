// return by refernce function
#include <iostream>
using namespace std;
int &larger(int &x, int &y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int num1, num2, large;
    cout << "\n Enter two number : ";
    cin >> num1 >> num2;
    large = larger(num1, num2);
    cout << "\n Large : " << large;
    larger(num1, num2) = -1;
    cout << "\n Number after function left of assignment operator : " << num1 << " " << num2;

    return 0;
}