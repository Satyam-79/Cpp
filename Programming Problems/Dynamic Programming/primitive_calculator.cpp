#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// vector<int> optimal_sequence(int n) {
//   std::vector<int> sequence;
//   while (n >= 1) {
//     sequence.push_back(n);
//     if (n % 3 == 0) {
//       n /= 3;
//     } else if (n % 2 == 0) {
//       n /= 2;
//     } else {
//       n = n - 1;
//     }
//   }
//   reverse(sequence.begin(), sequence.end());
//   return sequence;
// }
vector<vector<long long>> new_optimal_sequence(long long n)
{
  vector<vector<long long>> sequence(n + 1, vector<long long>(3));
  long long numCount = 1;
  sequence[0][1] = 0;
  sequence[0][0] = 0;
  sequence[0][2] = -1;

  for (size_t i = 1; i <= n; i++)
  {
    sequence[i][2] = __INT_MAX__ - 1;
    numCount = __INT_MAX__;
    for (size_t j = 0; j < 3; j++)
    {
      if (j == 0 && i >= 3 && i % 3 == 0)
      {
        numCount = sequence[i / 3][2] + 1;
      }
      else if (j == 1 && i >= 2 && i % 2 == 0)
      {
        numCount = sequence[i / 2][2] + 1;
      }
      else if (j == 2)
      {
        numCount = sequence[i - 1][2] + 1;
      }
      if (numCount < sequence[i][2])
      {
        sequence[i][2] = numCount;

        if ((j == 0) && (i >= 3) && (i % 3 == 0))
        {
          sequence[i][0] = i / 3;
          sequence[i][1] = 3;
        }
        else if ((j == 1) && (i >= 2))
        {
          sequence[i][1] = 2;

          sequence[i][0] = i / 2;
        }
        else if (j == 2)
        {
          sequence[i][0] = i - 1;
          sequence[i][1] = 1;
        }
      }
    }
  }
  return sequence;
  // for (size_t i = 1; i <= n; i++)
  // {
  //   for (size_t j = 0; j < 3; j++)
  //   {
  //     cout << sequence[i][j] << " ";
  //   }
  //   cout << endl;
  // }
}
void backtrack(vector<vector<long long>> &seq, long long n)
{
  long long a = seq[n][0];
  if (a == 1)
  {
    cout << a << " ";
    return;
  }
  backtrack(seq, a);
  cout << a << " ";
}
int main()
{
  long long n;
  std::cin >> n;
  // vector<long long> sequence =
  if (n <= 1)
  {
    cout << "0\n"
         << n;
    return 0;
  }

  vector<vector<long long>> seq = new_optimal_sequence(n);

  cout << seq[n][2] << endl;

  backtrack(seq, n);

  cout << n << " ";
}
