#include <iostream>
#include <stdarg.h>
using namespace std;
float avg(int argc, ...)
{
    va_list args; //args - name of list
    int i, sum = 0;
    va_start(args, argc); // argc - number of arguments in list(count)
    for (i = 0; i < argc; i++)
    {
        sum += va_arg(args, int); //va_arg - returns next argument in list with datatype written(int)
    }
    va_end(args);
    return ((float)sum / argc);
}
int main()
{
    float result;
    result = avg(7, 8, 9, 10, 4, 5, 10, 10, 10, 9, 7, 8, 9, 10, 10);
    cout.precision(2);
    cout << "\n AVERAGE = " << result;
    return 0;
}