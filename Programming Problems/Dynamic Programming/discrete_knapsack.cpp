#include <iostream>
#include <vector>

using std::vector;

long long optimal_weight(long long W, const vector<long long> &w)
{
  long long current_weight = 0;
  vector<vector<long long>> bag(w.size() + 1, vector<long long>(W + 1));

  for (size_t i = 0; i <= W; i++)
  {
    bag[0][i] = 0;
  }
  for (size_t i = 0; i <= w.size(); i++)
  {
    bag[i][0] = 0;
  }

  for (size_t i = 1; i <= w.size(); ++i)
  {
    for (size_t j = 1; j <= W; j++)
    {
      bag[i][j] = bag[i - 1][j];

      if (w[i - 1] <= j)
      {
        current_weight = bag[i - 1][j - w[i - 1]] + w[i - 1];

        if (bag[i][j] < current_weight)
        {
          bag[i][j] = current_weight;
        }
        // std::cout << bag[i][j] << " ";
      }
    }
  }

  return bag[w.size()][W];
}

int main()
{
  long long n, W;
  std::cin >> W >> n;
  vector<long long> w(n);
  for (long long i = 0; i < n; i++)
  {
    std::cin >> w[i];
  }
  std::cout << optimal_weight(W, w) << '\n';
}
