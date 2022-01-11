#include <iostream>
#include <vector>
#include <cstdlib>

using std::swap;
using std::vector;

long long int partition2(vector<long long int> &a, long long int l, long long int r, long long int &j)
{
  long long int x = a[l];
  // std::cout << " p" << x << '\n';
  j = r;
  long long int p = l;
  for (long long int i = l; i <= j; i)
  {
    if (a[i] < x)
    {
      // std::cout << " s" << a[i] << ' ';
      swap(a[i], a[p]);
      p++;
      i++;
    }
    else if (a[i] > x)
    {
      swap(a[i], a[j]);
      j--;
    }
    // std::cout << a[i] << ' ';
    else
    {
      i++;
    }
  }
  // swap(a[l], a[(p)]);
  return p;
}

void randomized_quick_sort(vector<long long int> &a, long long int l, long long int r)
{
  if (l >= r)
  {
    return;
  }
  long long int n = 0;
  long long int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  long long int m = partition2(a, l, r, n);

  randomized_quick_sort(a, l, m - 1);
  randomized_quick_sort(a, n + 1, r);
  // std::cout << std::endl;
  // for (long long int i = 0; i < a.size(); ++i)
  // {
  //   std::cout << a[i] << ' ';
  // }
}

int main()
{
  long long int n;
  std::cin >> n;
  vector<long long int> a(n);
  for (size_t i = 0; i < a.size(); ++i)
  {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i)
  {
    std::cout << a[i] << ' ';
  }
}
