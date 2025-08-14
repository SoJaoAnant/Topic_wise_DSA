#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        // vector<int> temp;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            int left = i + 1, right = nums.size() - 1;
            while (left < right)
            {
                if (nums[left] + nums[right] == -nums[i])
                {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    break;
                }
                else if (nums[left] + nums[right] < -nums[i])
                {
                    left += 1;
                }
                else
                {
                    right -= 1;
                }
            }
        }

        // cout << ans.size() << endl;

        for (vector<int> sub : ans)
        {
            for (int i : sub)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {0, 0, 0};
    obj.threeSum(nums);
    return 0;
}