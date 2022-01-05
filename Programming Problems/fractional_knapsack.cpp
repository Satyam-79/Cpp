#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long double value = 0.0;

bool sortcol(const vector<long double> &v1, const vector<long double> &v2)
{
  return v1[2] > v2[2];
}

double get_optimal_value(long double &capacity, vector<vector<long double>> &valWeight)
{
  vector<vector<long double>>::iterator it;
  it = valWeight.begin();
  if (valWeight.empty())
  {
    return value;
  }

  if (capacity >= valWeight[0][1])
  {
    capacity -= valWeight[0][1];
    value += valWeight[0][0];
    valWeight.erase(it);
    it = valWeight.begin();
    // cout << "\n ho v" << value << endl;
  }
  else if (capacity <= valWeight[0][1])
  {
    long double cost = valWeight[0][0] / valWeight[0][1];
    value += capacity * cost;
    // capacity = 0;
    // cout << "\nv" << value << endl;
    return value;
  }

  get_optimal_value(capacity, valWeight);
}

int main()
{
  int n;
  long double capacity;
  double cost = 0;
  cin >> n >> capacity;
  vector<vector<long double>> valWeight(n, vector<long double>(3));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> valWeight[i][j];
    }
    cost = valWeight[i][0] / valWeight[i][1];
    valWeight[i][2] = cost;
  }

  sort(valWeight.begin(), valWeight.end(), sortcol);

  double optimal_value = get_optimal_value(capacity, valWeight);

  // cout << endl;

  // for (int i = 0; i < valWeight.size(); i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //     cout << valWeight[i][j] << " ";
  //   cout << endl;
  // }
  std::cout << std::fixed;
  std::cout.precision(4);
  cout << optimal_value << endl;
  return 0;
}
