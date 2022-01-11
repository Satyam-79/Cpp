#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using std::vector;
int nn;

int search(int arr[], int low, int high, int key)
{
  if (high < low)
    return -1;
  int mid = (low + high) / 2;
  if (key == arr[mid])
    return mid;
  if (key > arr[mid])
    return search(arr, (mid + 1), high, key);
  return search(arr, low, (mid - 1), key);
}
void insertSorted(int arr[], int &n, int key)
{
  // if (n >= nn)
  // {
  //   return;
  // }
  int i;
  for (i = n - 1; (i >= 0 && arr[i] > key); i--)
    arr[i + 1] = arr[i];
  arr[i + 1] = key;
  n = n + 1;
}
bool deleteSorted(int arr[], int &n, int key)
{
  int key_pos = search(arr, 0, n, key);
  if (key_pos == -1)
  {
    return true;
  }
  int i;
  for (i = key_pos; i < n - 1; i++)
    arr[i] = arr[i + 1];
  arr[n - 1] = -1;
  n = n - 1;
  return false;
}

bool colsort0(vector<int> v1, vector<int> v2)
{
  return v1[0] < v2[0];
}

void fast_count_segments(vector<vector<int>> sets, vector<int> &points, int n, int m)
{
  int it = 0;
  int count = 0;
  int ppp = 0;
  int arr[n] = {-1};
  int zz = ((2 * n) + m);

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
    // if ((sets[it][1] == -1) && (it < zz - 1))
    // {
    //   int right = it + 1;
    //   while (sets[it][0] == sets[right][0] && right < zz)
    //   {
    //     // if (sets[right][1] != -1)
    //     // {
    //     //   if ((search(arr, 0, count, sets[right][1]) == -1))
    //     //   {
    //     //     points[sets[it][2]]++;
    //     //   }
    //     // }
    //     right++;
    //   }
    // }
    if ((sets[it][1] == -1) && (it > 0))
    {
      int left = it - 1;
      while ((sets[it][0] == sets[left][0]) && left > 0)
      {
        // cout << "ser" << search(arr, 0, count, sets[left][1]) << endl;
        // cout << "ser" << arr[0] << endl;
        if (sets[left][1] != -1)
        {

          if ((search(arr, 0, count, sets[left][1]) == -1))
          {
            points[sets[it][2]]++;
            // cout << "ser" << search(arr, 0, count, sets[left][1]) << endl;
          }
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
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int m, j = 0;
  std::cin >> nn >> m;
  if ((m <= 0) || (nn <= 0))
  {
    return 0;
  }

  vector<vector<int>> sets(((2 * nn) + m), vector<int>(3));
  vector<int> points(m, 0);

  for (int i = 0; i < (2 * nn); i++)
  {
    cin >> sets[i][0];
    sets[i][2] = -1;
    if (i % 2 == 0 && i != 0)
    {
      j++;
    }
    sets[i][1] = j;
    if (i >= 1)
    {
      if ((sets[i - 1][0] > sets[i][0]) && (sets[i - 1][1] == sets[i][1]))
      {
        i = i - 2;
        nn--;
        // cout << "big";
      }
    }
  }

  int zz = ((2 * nn) + m);

  for (int i = (2 * nn); i < zz; i++)
  {
    cin >> sets[i][0];
    sets[i][1] = -1;
    sets[i][2] = i - (2 * nn);
  }
  stable_sort(sets.begin(), sets.end(), colsort0);

  // for (int i = 0; i < ((2 * nn) + m); i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //     cout << sets[i][j] << "\t";
  //   }
  //   cout << endl;
  // }

  fast_count_segments(sets, points, nn, m);
  for (int j = 0; j < m; j++)
  {
    cout << points[j] << " ";
  }
}
