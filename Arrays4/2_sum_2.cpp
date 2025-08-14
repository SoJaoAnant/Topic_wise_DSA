#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0, j = numbers.size() - 1;

        while(i < j)
        {
            if(numbers[i] + numbers[j] == target)
            {
                return {i+1, j+1};
            }
            else if(numbers[i] + numbers[j] < target)
            {
                i += 1;
            }
            else
            {
                j -= 1;
            }
        }
        cout << "not found" << endl;
        return {};
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {2, 7, 11, 15};
    nums = obj.twoSum(nums, 17);
    cout << nums[0] << nums[1] << endl;
    return 0;
}