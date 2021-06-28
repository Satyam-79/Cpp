#include <iostream>
using namespace std;
int main()
{
    int num=0;
    cout << "Enter any number  ";
    cin >> num;
    int ctrl_var=0;
    ctrl_var=num;
    cout << "Control variable initial value: " << ctrl_var << endl;

    for (int i = 2; i < ctrl_var; i)
    {
        ctrl_var = (ctrl_var / 2);
        cout << "Control variable updated value: " << ctrl_var << endl;
    }

    return 0;
}