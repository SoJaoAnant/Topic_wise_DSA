#include <bits/stdc++.h>
using namespace std;

class Solution_using_Kadane
{
public:
    int maxProfit(vector<int> &prices)
    {
        int winsum = 0;
        int finsum = 0;
        int size = prices.size();
        for (int i = 0; i < size - 1; i++)
        {
            prices.push_back(-prices[i] + prices[i + 1]);
        }

        for (int i = size; i < prices.size(); i++)
        {
            winsum = max(winsum + prices[i], prices[i]);
            finsum = max(finsum, winsum);
        }

        return finsum;
    }
};

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max_profit = 0;
        int min_price = INT_MAX;

        for(int price: prices)
        {
            min_price = min(min_price, price);
            max_profit = max(max_profit, price - min_price);
        }

        return max_profit;
    }
};


int main()
{
    Solution obj;
    vector<int> prices = {2, 4, 1};
    cout << obj.maxProfit(prices);
    return 0;
}