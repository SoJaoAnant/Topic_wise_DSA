#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void fill_zeroes(vector<vector<int>> &matrix, int i, int j)
    {
        int x = 0;
        int y = 0;

        while (x < matrix[0].size())
        {
            matrix[i][x] = 0;
            x += 1;
        }

        while (y < matrix.size())
        {
            matrix[y][j] = 0;
            y += 1;
        }
    }

    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<pair<int, int>> coords;

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    coords.push_back({i, j});
                }
            }
        }

        for (int i = 0; i < coords.size(); i++)
        {
            fill_zeroes(matrix, coords[i].first, coords[i].second);
        }
    }
};

int main()
{
    Solution obj;
    vector<vector<int>> matri = {{0, 1, 2, 0},
                                 {3, 4, 5, 2},
                                 {1, 0, 1, 0}};
    // obj.setZeroes(matri);

    obj.fill_zeroes(matri, 2, 2);

    for (int i = 0; i < matri.size(); i++)
    {
        for (int j = 0; j < matri[i].size(); j++)
        {
            cout << matri[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}