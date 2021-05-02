#include <iostream>
using namespace std;

int main()
{

    int a = 34;
    float b = 34.4;
    double c = 34.4;
    long double d = 34.4;
    cout << "int: " << sizeof(a) << endl;
    cout << "float: " << sizeof(b) << endl;
    cout << "double: " << sizeof(c) << endl;
    cout << "long double: " << sizeof(d) << endl;
    cout << "34: " << sizeof(34) << endl;
    //refrence variable
    int x = 10;
    int &y = x;
    cout << "value of x; " << x << endl;
    cout << "value of y; " << y << endl;
    // typecasting
    float salary = 10000.345;
    int sal;
    sal = int(salary);
    cout << "salary: " << salary << endl;
    cout << "sal: " << sal << endl;

    return 0;
}
