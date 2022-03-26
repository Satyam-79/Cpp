#include <iostream>
#include <vector>

using namespace std;
void insertionSort(vector<int> &list)
{
    int key, i;
    for (size_t j = 1; j < list.size(); j++)
    {
        key = list[j];
        i = j - 1;
        while (i >= 0 && list[i] > key)
        {
            list[i + 1] = list[i];
            i--;
        }
        list[i + 1] = key;
    }
}
int main()
{
    vector<int> list = {8, 6, 7, 1, 3, 6, 4};
    cout << "Before Instertion : ";
    for (auto &&i : list)
    {
        cout << i << " ";
    }
    insertionSort(list);
    cout << "\nAfter  Instertion : ";
    for (auto &&i : list)
    {
        cout << i << " ";
    }

    return 0;
}