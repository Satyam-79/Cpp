#include <iostream>
using namespace std;
int main()
{
    int flag = 0, i, num;
    cout << "\nEnter any number : ";
    cin >> num;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "\n " << num << " is a composite number.";
    }
    else
        cout << "\n " << num << " is a prime number.";

    return 0;
}