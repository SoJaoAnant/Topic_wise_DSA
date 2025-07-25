#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // idk this guy is getting placed last idek why

        int hash[3] = {0};

        for (int num : nums)
        {
            hash[num] += 1;
        }

        nums.clear();

        while (hash[0]--)
        {
            nums.push_back(0);
        }
        while (hash[1]--)
        {
            nums.push_back(1);
        }
        while (hash[2]--)
        {
            nums.push_back(2);
        }
    }
};

int main()
{
    vector<int> nums = {0, 2, 1, 0, 1, 1, 2, 1, 1, 2, 1, 1, 2, 0, 0, 0, 0, 2, 2, 1, 2, 1};
    Solution obj;
    obj.sortColors(nums);
    return 0;
}