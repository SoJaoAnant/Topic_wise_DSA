#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int s = nums.size();
        int i = s - 2;
        int j;
        bool flag = false;
        int temp = INT_MAX;
        int swappy = 0;

        while (i != -1)
        {
            j = i + 1;
            while (j < s)
            {
                if (nums[j] > nums[i])
                {
                    flag = true;
                    temp = min(temp, nums[j]);
                    swappy = j;
                    // cout << temp << " at " << swappy;
                }
                j += 1;
            }
            if (flag)
            {
                break;
            }
            i -= 1;
        }

        // swap nums[i] and nums[j]
        if(i != -1)
        {
            nums[swappy] = nums[i];
            nums[i] = temp;
        }

        // sort from i + 1
        sort(nums.begin() + i + 1, nums.end());

        // for (int i : nums)
        // {
        // cout << i << " ";
        // }
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {3, 2, 1};

    obj.nextPermutation(nums);

    for (int i : nums)
    {
        cout << i << " ";
    }
    return 0;
}

/*
1234
1243
1324
1342
1423
1432
2134
2143
2314
2341
2413
2431
3124
3142
3214
3241
3412
3421
4123
4132
4213
4231
4312
4321
*/