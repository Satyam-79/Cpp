/*You are given a description of a rooted tree. Your task is to compute and output its height. Recall
that the height of a (rooted) tree is the maximum depth of a node, or the maximum distance from a
leaf to the root. You are given an arbitrary tree, not necessarily a binary tree.*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#if defined(__unix__) || defined(__APPLE__)
#include <sys/resource.h>
#endif

using namespace std;

int calHeight(int parent[], int visited[], int heightArr[], int node)
{
  if (parent[node] == -1)
  {
    visited[node] = 1;
    return 1;
  }
  if (visited[node])
  {
    return heightArr[node];
  }

  visited[node] = 1;

  heightArr[node] = 1 + calHeight(parent, visited, heightArr, parent[node]);

  return heightArr[node];
}

int height(int parent[], int n)
{
  int maxHeight = 0;

  int visited[n], heightArr[n];
  memset(visited, 0, sizeof(visited));
  memset(heightArr, 0, sizeof(heightArr));

  for (size_t i = 0; i < n; i++)
  {
    if (!visited[i])
    {
      heightArr[i] = calHeight(parent, visited, heightArr, i);
    }
    if (maxHeight < heightArr[i])
    {
      maxHeight = heightArr[i];
    }
  }

  return maxHeight;
}

int main_with_large_stack_space()
{
  cin.tie(NULL);
  std::ios_base::sync_with_stdio(0);

  int n;
  cin >> n;
  int parrent[n];

  for (size_t i = 0; i < n; i++)
  {
    cin >> parrent[i];
  }
  cout << height(parrent, n);

  return 0;
}

int main(int argc, char **argv)
{
#if defined(__unix__) || defined(__APPLE__)
  // Allow larger stack space
  const rlim_t kStackSize = 16 * 1024 * 1024; // min stack size = 16 MB
  struct rlimit rl;
  int result;

  result = getrlimit(RLIMIT_STACK, &rl);
  if (result == 0)
  {
    if (rl.rlim_cur < kStackSize)
    {
      rl.rlim_cur = kStackSize;
      result = setrlimit(RLIMIT_STACK, &rl);
      if (result != 0)
      {
        std::cerr << "setrlimit returned result = " << result << std::endl;
      }
    }
  }

#endif
  return main_with_large_stack_space();
}
