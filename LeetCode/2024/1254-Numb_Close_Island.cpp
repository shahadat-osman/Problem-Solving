// Shahadat Osman
// Date: 01-03-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int row, colm;
    bool vis[105][105];
    bool not_Valid;
    int cnt = 0;

    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

    bool valid(int i, int j)
    {
        if (i < 0 || i >= row || j < 0 || j >= colm)
            return false;

        return true;
    }

    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;

        for (int i = 0; i < 4; i++)
        {
            int ci = si + dir[i].first;
            int cj = sj + dir[i].second;

            if (!valid(ci, cj))
            {
                not_Valid = true;
            }
            else if (valid(ci, cj) && grid[ci][cj] == 0 &&
                     vis[ci][cj] == false)
            {
                dfs(ci, cj, grid);
            }
        }
    }
    int closedIsland(vector<vector<int>> &grid)
    {
        row = grid.size();
        colm = grid[0].size();

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < colm; j++)
            {
                if (grid[i][j] == 0 && vis[i][j] == false)
                {
                    not_Valid = false;

                    dfs(i, j, grid);

                    if (not_Valid == false)
                        cnt++;
                }
            }
        }

        return cnt;
    }
};