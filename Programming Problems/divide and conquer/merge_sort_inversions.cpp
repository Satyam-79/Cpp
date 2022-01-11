#include <iostream>
#include <vector>
using namespace std;

using std::vector;
long long merge(vector<long long> &arr, long long beg, long long mid, long long end)
{
  long long i = beg, j = mid + 1, index = beg, z, k, count = 0;
  z = (end + 2);
  // cout << " b" << beg << endl;
  // cout << " e" << end << endl;
  // cout << " z" << z << endl;
  long long temp[z];

  while ((i <= mid) && (j <= end))
  {
    if (arr[i] < arr[j])
    {
      temp[index] = arr[i];
      i++;
    }
    else
    {
      count++;
      temp[index] = arr[j];
      j++;
    }
    index++;
  }
  if (i > mid)
  {
    while (j <= end)
    {
      temp[index] = arr[j];
      j++;
      index++;
      // cout << " j" << j << endl;

      // cout << " j-ind" << index << endl;
    }
  }
  else
  {
    while (i <= mid)
    {
      temp[index] = arr[i];
      i++;
      count++;
      index++;
      // cout << " i-ind" << index << endl;
    }
  }
  // cout << " i" << index << endl;

  for (int k = beg; k < index; k++)
  {
    arr[k] = temp[k];
  }
  return count;
}
long long get_number_of_inversions(vector<long long> &arr, long long beg, long long end)
{
  long long mid;
  static long long inversion;
  if (beg < end)
  {
    mid = (beg + end) / 2;
    get_number_of_inversions(arr, beg, mid);
    get_number_of_inversions(arr, mid + 1, end);
    inversion += merge(arr, beg, mid, end);
  }
  return inversion;
}

int main()
{
  long long n;
  std::cin >> n;
  vector<long long> a(n);
  for (size_t i = 0; i < a.size(); i++)
  {
    std::cin >> a[i];
  }
  // get_number_of_inversions(a, 0, (n - 1));
  std::cout << get_number_of_inversions(a, 0, (n - 1)) << '\n';
  // for (long long j = 0; j < n; j++)
  // {
  //   std::cout << a[j] << " ";
  // }
}
