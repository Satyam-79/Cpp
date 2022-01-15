#include <algorithm>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
using std::make_pair;
using std::min;
using std::pair;
using std::string;
using std::vector;
// using namespace std;

double distance(pair<int, int> p1, pair<int, int> p2)
{
  double x = pow((p1.first - p2.first), 2);
  double y = pow((p1.second - p2.second), 2);

  return sqrt(x + y);
}

double nativeDist(vector<pair<int, int>> &points, int beg, int end)
{
  double min = __FLT_MAX__;
  for (size_t i = beg; i <= end; i++)
  {
    for (size_t j = i + 1; j <= end; j++)
    {
      if (distance(points[i], points[j]) < min)
      {
        min = distance(points[i], points[j]);
      }
    }
  }
  return min;
}
double minimal_distance(vector<pair<int, int>> &xSorted, vector<pair<int, int>> &ySorted, int beg, int end)
{
  double d1, d2, d, d_min = __FLT_MAX__;
  auto mid = (beg + end) / 2;
  pair<int, int> midPoint = xSorted[mid];

  if ((end - beg + 1) <= 3)
  {
    return nativeDist(xSorted, beg, end);
  }

  vector<pair<int, int>> ySorted_left;
  ySorted_left.reserve(end - beg + 1);
  vector<pair<int, int>> ySorted_right;
  ySorted_right.reserve(end - beg + 1);

  for (size_t i = beg; i <= end; i++)
  {
    if (ySorted[i].first <= midPoint.first)
    {
      ySorted_left.push_back(make_pair(ySorted[i].first, ySorted[i].second));
    }
    else
    {
      ySorted_right.push_back(make_pair(ySorted[i].first, ySorted[i].second));
    }
  }

  d1 = minimal_distance(xSorted, ySorted_left, beg, mid);
  d2 = minimal_distance(xSorted, ySorted_right, mid + 1, end);
  d_min = min(d1, d2);

  vector<pair<int, int>> strip;
  strip.reserve(end - beg + 1);

  for (size_t i = 0; i < ySorted.size(); i++)
  {
    if (((midPoint.first - d_min) < ySorted[i].first) && (ySorted[i].first < (midPoint.first + d_min)))
    {
      strip.push_back(make_pair(ySorted[i].first, ySorted[i].second));
    }
  }
  for (size_t i = 0; i < strip.size(); i++)
  {
    for (size_t j = i + 1; j < min((i + 7), strip.size()); j++)
    {
      d = distance(strip[i], strip[j]);
      d_min = min(d, d_min);
    }
  }

  return d_min;
}

int main()
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, x, y;
  std::cin >> n;

  vector<pair<int, int>> points;
  points.reserve(n);
  for (size_t i = 0; i < n; i++)
  {
    cin >> x >> y;
    points.push_back(make_pair(x, y));
  }
  vector<pair<int, int>> xSorted;
  xSorted.reserve(n);
  vector<pair<int, int>> ySorted;
  ySorted.reserve(n);

  for (size_t i = 0; i < n; i++)
  {
    xSorted.push_back(make_pair(points[i].first, points[i].second));
    ySorted.push_back(make_pair(points[i].first, points[i].second));
  }

  sort(xSorted.begin(), xSorted.end(), [](pair<int, int> &a, pair<int, int> &b)
       { return a.first < b.first; });
  sort(ySorted.begin(), ySorted.end(), [](pair<int, int> &a, pair<int, int> &b)
       { return a.second < b.second; });

  // for (auto &&i : xSorted)
  // {
  //   cout << i.first << " " << i.second << endl;
  // }
  // auto d = points[0].first;
  // cout << "ddd" << d;
  std::cout << std::fixed;
  std::cout << std::setprecision(5) << minimal_distance(xSorted, ySorted, 0, n - 1) << "\n";
}
