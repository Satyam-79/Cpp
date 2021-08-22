#include <iostream>
#include <string>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}
void add(string str1, string str2)
{
    cout << "\n The concatenate string is : " << (str1 + str2);
}
int main()
{
    cout << "\n 5 + 7 = " << add(5, 7);
    cout << "\n 123.678 + 27.95 = " << add(123.678, 25.97);
    add("Function ", "Overloading");
    return 0;
}