#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

bool get_majority_element(const vector<long long int> a, long long int total)
{
  long long int left = 0, right = 0;
  left = right = ((total / 2));
  while ((a[(total / 2)]) == a[left])
  {
    left--;
  }
  // std::cout << " l" << left;
  while ((a[(total / 2)]) == a[right])
  {
    right++;
  }
  // std::cout << " r" << right;

  if ((right - left - 1) >= ((total / 2) + 1))
  {
    return true;
  }

  return false;
}

int main()
{
  long long int n;
  std::cin >> n;
  if (n == 0)
  {
    return 0;
  }

  vector<long long int> a(n);
  for (size_t i = 0; i < a.size(); ++i)
  {
    std::cin >> a[i];
  }
  sort(a.begin(), a.end());
  std::cout << get_majority_element(a, n);
}