#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> fast_count_segment(vector<std::pair<int, int>> &ranges, vector<int> &points)
{
    vector<int> cnt(points.size());

    vector<pair<int, int>> container;
    container.reserve((ranges.size() * 2) + points.size());

    unordered_map<int, int> count_point;
    count_point.reserve(points.size());

    for (auto &&i : ranges)
    {
        container.push_back(make_pair(i.first, 0));
        container.push_back(make_pair(i.second, 2));
    }
    for (auto &&i : points)
    {
        container.push_back(make_pair(i, 1));
    }
    sort(container.begin(), container.end(), [](pair<int, int> &a, pair<int, int> &b)
         {
             if (a.first == b.first)
             {
                 return (a.second < b.second);
             }
             else
             {
                 return (a.first < b.first);
             } });

    int count = 0;
    for (auto &&i : container)
    {

        if (i.second == 0)
        {
            count++;
        }
        else if (i.second == 2)
        {
            count--;
        }
        else
        {
            count_point.insert(make_pair(i.first, count));
        }
    }
    for (int i = 0; i < points.size(); i++)
    {
        cnt[i] = count_point[points[i]];
    }
    return cnt;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m, start, end;
    cin >> n >> m;
    vector<pair<int, int>> ranges;
    ranges.reserve(n);
    vector<int> points(m);

    for (size_t i = 0; i < n; i++)
    {
        cin >> start >> end;
        if (start <= end)
        {
            ranges.push_back(make_pair(start, end));
        }
    }
    for (size_t i = 0; i < points.size(); i++)
    {
        cin >> points[i];
    }

    auto count1 = fast_count_segment(ranges, points);

    for (size_t i = 0; i < count1.size(); i++)
    {
        cout << count1[i] << " ";
    }

    return 0;
}