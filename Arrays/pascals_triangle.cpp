#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> pascal;
        vector<int> row;

        row.push_back(1);
        pascal.push_back(row);
        row.clear();

        for (int i = 0; i < numRows - 1; i++)
        {
            row.push_back(1);
            for (int j = 1; j <= i; j++)
            {
                row.push_back(pascal[i][j-1] + pascal[i][j]);
            }
            row.push_back(1);
            pascal.push_back(row);
            row.clear();
        }
        // for (vector<int> row : pascal)
        // {
        //     for (int ele : row)
        //     {
        //         cout << ele << " ";
        //     }
        //     cout << endl;
        // }

        return pascal;
    }
};

int main()
{
    Solution obj;
    obj.generate(15);
    return 0;
}
