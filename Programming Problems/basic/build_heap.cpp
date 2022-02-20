#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::make_pair;
using std::pair;
using std::swap;
using std::vector;

class HeapBuilder
{
private:
  vector<int> data_;
  vector<pair<int, int>> swaps_;

  void WriteResponse() const
  {
    cout << swaps_.size() << "\n";
    for (int i = 0; i < swaps_.size(); ++i)
    {
      cout << swaps_[i].first << " " << swaps_[i].second << "\n";
    }
  }

  void ReadData()
  {
    int n, a;
    cin >> n;
    data_.resize(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> data_[i];
      // data_.push_back(a);
    }
  }

  void Swap_Fill(int a, int b)
  {
    swaps_.push_back(make_pair(a, b));
    swap(data_[a], data_[b]);
    return;
  }

  int parent(int p)
  {
    return (p - 1) / 2;
  }

  int leftChild(int l)
  {
    return ((2 * l) + 1);
  }

  int rightChild(int r)
  {
    return ((2 * r) + 2);
  }

  void shiftUp(int i)
  {
    while (i > 1 && data_[parent(i)] > data_[i])
    {
      Swap_Fill(parent(i), i);
      i = parent(i);
    }
    return;
  }

  void shiftDown(int i)
  {
    int maxIndex = i;
    int l = leftChild(i);
    if (l < data_.size() && data_[l] < data_[maxIndex])
    {
      maxIndex = l;
    }
    int r = rightChild(i);
    if (r < data_.size() && data_[r] < data_[maxIndex])
    {
      maxIndex = r;
    }
    if (i != maxIndex)
    {
      Swap_Fill(i, maxIndex);
      shiftDown(maxIndex);
    }
    return;
  }

  void GenerateSwaps()
  {
    swaps_.clear();

    int n = data_.size();
    for (int i = (n / 2); i >= 0; i--)
    {
      shiftDown(i);
    }
    return;
    // The following naive implementation just sorts
    // the given sequence using selection sort algorithm
    // and saves the resulting sequence of swaps.
    // This turns the given array into a heap,
    // but in the worst case gives a quadratic number of swaps.
    //
    // TODO: replace by a more efficient implementation
    // for (int i = 0; i < data_.size(); ++i)
    //   for (int j = i + 1; j < data_.size(); ++j) {
    //     if (data_[i] > data_[j]) {
    //       swap(data_[i], data_[j]);
    //       swaps_.push_back(make_pair(i, j));
    //     }
    //   }
  }

public:
  void Solve()
  {
    ReadData();
    GenerateSwaps();
    WriteResponse();
  }
};

int main()
{
  // std::ios_base::sync_with_stdio(false);
  HeapBuilder heap_builder;
  heap_builder.Solve();
  return 0;
}
