#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int marks[50], i;
    int group[10] = {0};
    for (int i = 0; i < 50; i++)
    {
        marks[i] = rand() % 101;
        ++group[(int)(marks[i] / 10)];
    }
    cout << "\n\n *************************";
    cout << "\n GROUP \t\t FREQUENCY";
    for (i = 0; i < 10; i++)
    {
        cout << "\n " << i << " \t\t " << group[i];
    }

    return 0;
}