#include <iostream>
using namespace std;
int main()
{
    int marks[10][3], i, j;
    int total_marks[10] = {0};
    float average[10], class_avg = 0, total_avg = 0;
    cout << "\n Enter the data";
    for (i = 0; i < 10; i++)
    {
        cout << "\n Enter the marks of " << i << " student in 3 subjects : ";
        for (j = 0; j < 3; j++)
        {
            cin >> marks[i][j];
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            total_marks[i] += marks[i][j];
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            average[i] = float(total_marks[i] / 3.0);
        }
    }
    for (i = 0; i < 10; i++)
    {
        total_avg += average[i];
    }
    class_avg = total_avg / 10;
    cout << "\n\n STUD NO. \t MARKS OBTAINED IN THREE SUBJECTS \t TOTAL MARKS \t AVERAGE";
    cout << "\n *********************************************************";
    for (i = 0; i < 10; i++)
    {
        cout.precision(2);
        cout << "\n"
             << i;
        for (j = 0; j < 3; j++)
        {
            cout << "\t\t" << marks[i][j];
        }
        cout << "\t\t" << total_marks[i] << "\t" << average[i];
    }
    cout << "\n\n CLASS AVERAGE = " << class_avg;
    return 0;
}