#include <iostream>
#include <vector>
using namespace std;

void distribution(vector<long int> &children, long int n)
{
  static long int remainingToffee = n;
  static long int preChild = 0;
  static long int count = 0;
  if (remainingToffee >= preChild)
  {
    count++;
    remainingToffee -= count;
    children.push_back(count);
    preChild = (count + 1);
    distribution(children, remainingToffee);
  }
  else if (remainingToffee < preChild && remainingToffee != 0)
  {
    long int temp = children[children.size() - 1];
    children.pop_back();
    children.push_back(remainingToffee + temp);
    return;
  }
}

int main()
{
  long int n;
  cin >> n;
  vector<long int> children;
  distribution(children, n);
  cout << children.size() << '\n';

  for (auto x : children)
  {
    cout << x << ' ';
  }
}
