#include <iostream>
using namespace std;
int main()
{
    int option=1;
    switch (option)
    {
    case 1: cout<<"\nRead three numbers";
    case 2: cout<<"\nCalculate Total";
    case 3: cout<<"\nCalculate Average";
    case 4: cout<<"\nDisplay the smallest value";
    case 5: cout<<"\nDisplay the largest value"; 
        break;
    default: cout<<"\nOption not available";
        break;
    }
    
    return 0;
}