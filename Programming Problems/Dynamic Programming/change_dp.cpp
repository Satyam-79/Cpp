#include <iostream>

int get_change(int money)
{
  int minNumCoin[money + 1] = {0}, numCoin, coin[3] = {1, 3, 4};
  minNumCoin[0] = 0;
  // std::cout << minNumCoin[2];

  for (size_t m = 1; m <= money; m++)
  {
    minNumCoin[m] = __INT_MAX__;
    // std::cout << minNumCoin[m];
    for (size_t i = 0; i < 3; i++)
    {
      if (m >= coin[i])
      {
        numCoin = minNumCoin[m - coin[i]] + 1;
        if (numCoin < minNumCoin[m])
        {
          minNumCoin[m] = numCoin;
        }
      }
    }
  }

  return minNumCoin[money];
}

int main()
{
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
