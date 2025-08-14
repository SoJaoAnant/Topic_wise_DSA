#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int rabbu = nums[0];
        int tabbu = nums[0];

        // cout << rabbu << " " << tabbu << endl;

        do
        {
            rabbu = nums[rabbu];
            rabbu = nums[rabbu];
            tabbu = nums[tabbu];
            // cout << rabbu << " " << tabbu << endl;
        } while (rabbu != tabbu);

        tabbu = nums[0];
        while(tabbu != rabbu)
        {
            tabbu = nums[tabbu];
            rabbu = nums[rabbu];
        }

        cout << rabbu << " " << tabbu << endl;

        return rabbu;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {2, 5, 9, 6, 9, 3, 8, 9, 7, 1};

    obj.findDuplicate(nums);
    return 0;
}