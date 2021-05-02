#include <iostream>
using namespace std;

#define MAX 100

int main()
{

    int a[MAX];
    int n, i, j;
    int t;

    cin >> n;

    for (i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for (i = 0; i < n; i++)
        cout << a[i] << "\t";
    cout << endl;

    return 0;
}