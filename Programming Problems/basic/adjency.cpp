#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{

    if ((a & 1) == (b & 1))
    {
        return a < b;
    }

    return (a & 1) > (b & 1);
}

int main()
{
    int t, n, counter = 0;
    cin >> t;
    while (t > 0)
    {
        cin >> n;
        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, compare);

        while (arr[counter] % 2 == 1)
        {
            counter++;
        }
        if (counter % 2 == 0)
        {
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << "\n";
        }
        else
            cout << -1 << "\n";
        counter = 0;
        t--;
    }
    return 0;
}