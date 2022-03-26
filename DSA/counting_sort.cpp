#include <iostream>
#include <vector>
using namespace std;

void countingSort(vector<int> &array, int n)
{
    int max = INT32_MIN;
    vector<int> countArray, sortedArray;

    for (auto &&i : array)
        if (max < i)
            max = i;

    countArray.resize(max + 1);
    sortedArray.resize(n);

    for (auto &&i : countArray)
        i = 0;

    for (auto &&i : array)
        countArray[i]++;

    for (int i = 1; i <= max; i++)
        countArray[i] += countArray[i - 1];

    for (int i = n - 1; i >= 0; i--)
    {
        sortedArray[countArray[array[i]] - 1] = array[i];
        countArray[array[i]]--;
    }

    for (int i = 0; i < array.size(); i++)
        array[i] = sortedArray[i];
}
int main()
{
    int n;
    cout << "Enter total number of element : ";
    cin >> n;
    vector<int> array(n);
    cout << "Enter elements : ";

    for (auto &&i : array)
        cin >> i;

    countingSort(array, n);
    cout << "Elements after counting sort : ";

    for (auto &&i : array)
        cout << i << " ";

    return 0;
}