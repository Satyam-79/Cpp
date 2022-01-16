#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

long long max_dot_product(vector<long long> &a, vector<long long> &b)
{
  auto it_a = a.begin();
  auto it_b = b.begin();
  auto et_a = a.end();
  auto et_b = b.end();
  et_a--, et_b--;
  long long prod = 0;
  long long i = 0;

  while (*it_a > 0 && *it_b > 0 && i < a.size())
  {
    prod += (*it_a) * (*it_b);
    it_a++, it_b++;
    i++;
  }
  while (*et_a < 0 && *et_b < 0 && i < a.size())
  {
    prod += (*et_a) * (*et_b);
    et_a--, et_b--;
    i++;
  }
  if (i < a.size())
  {
    do
    {
      prod += (*it_a) * (*et_b);
      it_a++, et_b--;
      i++;
    } while (it_a != et_a && i < a.size());
  }

  return prod;
}

int main()
{
  size_t n;
  std::cin >> n;
  vector<long long> a(n), b(n);
  for (size_t i = 0; i < n; i++)
  {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++)
  {
    std::cin >> b[i];
  }
  sort(a.begin(), a.end(), [](long long &aa, long long &bb)
       { return aa > bb; });
  sort(b.begin(), b.end(), [](long long &aa, long long &bb)
       { return aa > bb; });
  std::cout << max_dot_product(a, b) << std::endl;
}
