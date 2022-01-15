#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
using std::max;
using std::vector;

int compute_min_refills(int dist, int tank, vector<int> &stops, int s)
{
    int refills = 0, rem_tank = tank;

    auto it = stops.begin();
    while (!stops.empty())
    {
        if ((rem_tank >= dist) || rem_tank < *it)
        {
            break;
        }

        if ((rem_tank < *(it + 1)) || (stops.size() == 1))
        {
            refills++;
            rem_tank = *it + tank;
        }

        stops.erase(it);
        it = stops.begin();
    }
    if (rem_tank < dist)
    {
        refills = -1;
    }

    return refills;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);
    cout << compute_min_refills(d, m, stops, 0) << "\n";

    return 0;
}
