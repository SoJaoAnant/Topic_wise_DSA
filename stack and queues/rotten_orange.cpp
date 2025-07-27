#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int m = grid.size();    // rows
        int n = grid[0].size(); // columns

        int noranges = 0;
        int time = 0;

        queue<pair<pair<int, int>, int>> que;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] != 0)
                {
                    if (grid[i][j] == 2)
                    {
                        que.push({{i, j}, 0});
                    }
                    noranges += 1;
                }
            }
        }

        if (noranges == 0)
        {
            return 0;
        }

        if (que.empty())
        {
            cout << "queue is empty" << endl;
            return -1;
        }

        while (!que.empty())
        {
            // bool can_rot = false;
            pair<int, int> curr = que.front().first;
            int curr_time = que.front().second;
            time = max(time, curr_time);

            que.pop();
            noranges -= 1;

            // north
            if (curr.first - 1 >= 0 && grid[curr.first - 1][curr.second] == 1)
            {
                // can_rot = true;
                que.push({{curr.first - 1, curr.second}, curr_time + 1});
                grid[curr.first - 1][curr.second] = 2;
            }
            // east
            if (curr.second + 1 < n && grid[curr.first][curr.second + 1] == 1)
            {
                // can_rot = true;
                que.push({{curr.first, curr.second + 1}, curr_time + 1});
                grid[curr.first][curr.second + 1] = 2;
            }
            // south
            if (curr.first + 1 < m && grid[curr.first + 1][curr.second] == 1)
            {
                // can_rot = true;
                que.push({{curr.first + 1, curr.second}, curr_time + 1});
                grid[curr.first + 1][curr.second] = 2;
            }
            // west
            if (curr.second - 1 >= 0 && grid[curr.first][curr.second - 1] == 1)
            {
                // can_rot = true;
                que.push({{curr.first, curr.second - 1}, curr_time + 1});
                grid[curr.first][curr.second - 1] = 2;
            }

            // if (can_rot)
            // {
            // min = max();
            // }
        }

        // cout << noranges << " " << time << endl;
        if (noranges != 0)
        {
            return -1;
        }
        return time;
    }
};

int main()
{
    vector<vector<int>> grid = {{2, 1, 1}, {1, 1, 0}, {0, 1, 0}};
    Solution obj;
    obj.orangesRotting(grid);

    return 0;
}