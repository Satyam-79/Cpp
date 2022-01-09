#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using std::vector;
long long nn;

long long search(long long arr[], long long low, long long high, long long key)
{
  if (high < low)
    return -1;
  long long mid = (low + high) / 2;
  if (key == arr[mid])
    return mid;
  if (key > arr[mid])
    return search(arr, (mid + 1), high, key);
  return search(arr, low, (mid - 1), key);
}
void insertSorted(long long arr[], long long &n, long long key)
{
  // if (n >= nn)
  // {
  //   return;
  // }
  long long i;
  for (i = n - 1; (i >= 0 && arr[i] > key); i--)
    arr[i + 1] = arr[i];
  arr[i + 1] = key;
  n = n + 1;
}
bool deleteSorted(long long arr[], long long &n, long long key)
{
  long long key_pos = search(arr, 0, n, key);
  if (key_pos == -1)
  {
    return true;
  }
  long long i;
  for (i = key_pos; i < n - 1; i++)
    arr[i] = arr[i + 1];
  arr[n - 1] = -1;
  n = n - 1;
  return false;
}

bool colsort0(vector<long long> v1, vector<long long> v2)
{
  return v1[0] < v2[0];
}

void fast_count_segments(vector<vector<long long>> sets, vector<long long> &points, long long n, long long m)
{
  long long it = 0;
  long long count = 0;
  long long ppp = 0;
  long long arr[n] = {-1};
  long long zz = ((2 * n) + m);

  while (it < zz)
  {
    // cout << " it " << it << endl;
    // cout << " set " << sets[it][1] << endl;

    if (sets[it][1] >= 0)
    {
      if (deleteSorted(arr, count, sets[it][1]))
      {
        insertSorted(arr, count, sets[it][1]);
        // cout << "inserted " << sets[it][1] << endl;
      }
      // else
      //   cout << " del " << sets[it][1] << endl;
    }

    else
    {
      points[sets[it][2]] = count;
      // cout << ppp << "p " << points[ppp] << endl;
      // ppp++;
    }
    if ((sets[it][1] == -1) && (it < zz - 1))
    {
      long long right = it + 1;
      while (sets[it][0] == sets[right][0] && right < zz)
      {
        if ((search(arr, 0, count, sets[right][1]) == -1) && sets[right][1] != -1)
        {
          points[sets[it][2]]++;
        }
        right++;
      }
    }
    if ((sets[it][1] == -1) && (it > 0))
    {
      long long left = it - 1;
      while ((sets[it][0] == sets[left][0]) && left > 0)
      {
        // cout << "ser" << search(arr, 0, count, sets[left][1]) << endl;
        // cout << "ser" << arr[0] << endl;

        if ((search(arr, 0, count, sets[left][1]) == -1) && sets[left][1] != -1)
        {
          points[sets[it][2]]++;
          // cout << "ser" << search(arr, 0, count, sets[left][1]) << endl;
        }
        left--;
        // cout << "while" << endl;
      }
      // cout << "left" << endl;
    }
    // cout << " c" << count << endl;

    it++;
  }

  return;
}

int main()
{
  long long m, j = 0;
  std::cin >> nn >> m;

  vector<vector<long long>> sets(((2 * nn) + m), vector<long long>(3));
  vector<long long> points(m, 0);

  for (long long i = 0; i < (2 * nn); i++)
  {
    cin >> sets[i][0];
    sets[i][2] = -1;
    if (i % 2 == 0 && i != 0)
    {
      j++;
    }
    sets[i][1] = j;
  }

  long long zz = ((2 * nn) + m);

  for (long long i = (2 * nn); i < zz; i++)
  {
    cin >> sets[i][0];
    sets[i][1] = -1;
    sets[i][2] = i - (2 * nn);
  }
  stable_sort(sets.begin(), sets.end(), colsort0);
  for (long long i = 0; i < ((2 * nn) + m); i++)
  {
    for (long long j = 0; j < 3; j++)
    {
      cout << sets[i][j] << "\t";
    }
    cout << endl;
  }

  // fast_count_segments(sets, points, nn, m);
  // for (long long j = 0; j < m; j++)
  // {
  //   cout << points[j] << " ";
  // }
}
