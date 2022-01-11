#include <iostream>
// #include <cassert>
#include <vector>

using std::vector;
long long int flag;

long long int binary_search(const vector<long long int> &a, long long int key, long long int low, long long int high)
{
  long long int mid = (low + ((high - low) / 2));

  if (high < low)
  {
    return -1;
  }

  else if (key == a[mid])
  {
    long long int left = mid;
    while (key == a[left])
    {
      left--;
    }
    return ++left;
  }
  else if (key < a[mid])
  {
    return binary_search(a, key, low, (mid - 1));
  }
  else
  {
    return binary_search(a, key, (mid + 1), high);
  }
}

int main()
{
  long long int n;
  std::cin >> n;
  vector<long long int> a(n);
  for (size_t i = 0; i < a.size(); i++)
  {
    std::cin >> a[i];
  }
  long long int low = 0, high = (n - 1);
  long long int m;
  std::cin >> m;
  vector<long long int> b(m);
  for (long long int i = 0; i < m; ++i)
  {
    std::cin >> b[i];
  }
  for (long long int i = 0; i < m; ++i)
  {
    flag = 0;
    std::cout << binary_search(a, b[i], low, high) << " ";
  }
}
