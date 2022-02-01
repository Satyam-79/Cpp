#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

pair<int, int> twoSum(vector<int> &numbers, int n, int sum)
{
    pair<int, int> points;
    unordered_map<int, int> container;
    int difference;

    container.insert(make_pair(numbers[0], 0));

    for (size_t i = 1; i < n; i++)
    {
        
            difference = sum - numbers[i];
            auto it = container.find(difference);
            if (it != container.end())
            {
                points.first = it->second;
                points.second = i;
                return points;
            }
            container.insert(make_pair(numbers[i], i));
        
    }
    return points;
}

int main()
{
    int n, sum;
    cin >> n;
    vector<int> numbers;
    numbers.reserve(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    cin >> sum;
    pair<int, int> points;
    points = twoSum(numbers, n, sum);
    cout << points.first << " " << points.second;

    return 0;
}