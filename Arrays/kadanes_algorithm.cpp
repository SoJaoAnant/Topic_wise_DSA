#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int winsum = nums[0];
        int finsum = winsum;
        int j = 0;

        while (j < nums.size() - 1)
        {
            if (winsum < 0)
            {
                winsum = 0;
                j += 1;
            }
            else
            {
                j += 1;
            }
            winsum += nums[j];
            finsum = max(winsum, finsum);
        }

        /*
        this is how chatgpt did it (i dont want to discard my algo but this one's pretty clean too)

        for (int i = 1; i < nums.size(); i++)
        {
            winsum = max(nums[i], winsum + nums[i]);
            finsum = max(winsum, finsum);
        }

        */

        return finsum;
    }
};

int main()
{
    Solution obj;
    // vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> nums = {1, 2, 3, -8, 4, 5, 6, 7};
    cout << obj.maxSubArray(nums);

    return 0;
}