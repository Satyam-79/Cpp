#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using std::vector;

bool colsort0(vector<long long> v1, vector<long long> v2)
{
  return v1[0] < v2[0];
}

void fast_count_segments(vector<vector<long long>> sets, vector<long long> points, long long n, long long m)
{
  return;
}

int main()
{
  long long n, m, j = 0;
  std::cin >> n >> m;

  vector<vector<long long>> sets(((2 * n) + m), vector<long long>(3));
  vector<long long> points(m, 0);

  for (long long i = 0; i < (2 * n); i++)
  {
    cin >> sets[i][0];
    sets[i][2] = -1;
    if (i % 2 == 0 && i != 0)
    {
      j++;
    }
    sets[i][1] = j;
  }
  long long zz = ((2 * n) + m);
  for (long long i = (2 * n); i < zz; i++)
  {
    cin >> sets[i][0];
    sets[i][1] = -1;
    sets[i][2] = i - (2 * n);
  }
  sort(sets.begin(), sets.end(), colsort0);
  // for (long long i = 0; i < points.size(); i++)
  // {
  //   cin >> points[i];
  // }
  for (long long i = 0; i < ((2 * n) + m); i++)
  {
    for (long long j = 0; j < 3; j++)
    {
      cout << sets[i][j] << "\t";
    }
    cout << endl;
  }
  //use fast_count_segments
  fast_count_segments(sets, points, n, m);
}
