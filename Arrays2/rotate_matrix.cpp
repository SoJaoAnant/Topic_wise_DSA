#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void do_transpose(vector<vector<int>> &matrix)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = i + 1; j < matrix.size(); j++)
            {
                // cout << i << " " << j << endl;
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }

    void do_reverse(vector<vector<int>> &matrix)
    {
        int s = matrix.size();
        for (int i = 0; i < s; i++)
        {
            for (int j = 0; j < s / 2; j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][s - j - 1];
                matrix[i][s - j - 1] = temp;
            }
        }
    }

    void rotate(vector<vector<int>> &matrix)
    {
        do_transpose(matrix);
        do_reverse(matrix);
    }
};

int main()
{
    Solution obj;
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    obj.rotate(matrix);
    return 0;
}