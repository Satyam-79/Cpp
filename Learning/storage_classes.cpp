#include <iostream>
using namespace std;
int a = 10;
// static int x = 20;
int x = 30; // global variable is static by default
void prints();
void print();
int main()
{
    cout << "value of a in main() : " << a << endl;
    int a = 1;
    cout << "value of a in local main() : " << a << endl;
    print();
    cout << "\nFirst call of prints()" << endl;
    prints();
    cout << "Second call of prints()" << endl;
    prints();
    cout << "Third call of prints()" << endl;
    prints();
}
void print()
{
    cout << "value of a in the print() : " << a << endl;
}
void prints()
{
    int y = 0;
    cout << "Static integer variable,x : " << x << endl;
    cout << "integer variable,y : " << y << endl;
    x++;
    y++;
}