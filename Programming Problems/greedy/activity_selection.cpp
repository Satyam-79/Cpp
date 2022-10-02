#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class activity_selection
{
private:
    int n, start, end;
    vector<pair<int, int>> activity;
    vector<pair<int, int>> selected;

    void readActivity()
    {
        cin >> n;
        activity.reserve(n);
        selected.reserve(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> start >> end;
            if (start <= end)
            {
                activity.push_back(make_pair(start, end));
            }
        }
    }
    void assignActivity()
    {
        sort(activity.begin(), activity.end(), [](pair<int, int> &a, pair<int, int> &b)
             { return (a.second < b.second); });

        selected.push_back(activity.front());
        for (size_t i = 1; i < n; i++)
        {
            if (activity[i].first >= selected.back().second)
            {
                selected.push_back(activity[i]);
            }
        }
    }
    void printActivities()
    {
        for (auto &&i : selected)
        {
            cout << "{" << i.first << ", " << i.second << "} ";
        }
    }

public:
    void solve()
    {
        readActivity();
        assignActivity();
        printActivities();
    }
};

int main()
{
    activity_selection activities;
    activities.solve();
}