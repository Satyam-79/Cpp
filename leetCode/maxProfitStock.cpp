#include <iostream>
#include <vector>

using namespace std;
int maxProfit(vector<int> &prices)
{
    int min, max, minIndex, maxIndex, profit = 0;
    min = max = prices[0];
    minIndex = maxIndex = 0;
    for (size_t i = 1; i < prices.size(); i++)
    {
        if (prices[i] < min)
        {
            min = max = prices[i];
            minIndex = maxIndex = i;
        }
        else if (max <= prices[i])
        {
            max = prices[i];
            maxIndex = i;
        }
        if (profit < max - min)
        {
            profit = max - min;
        }
    }
    return profit;
}
int main()
{
    
    int n;
    cin >> n;
    vector<int> prices(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    cout << maxProfit(prices);

    return 0;
}