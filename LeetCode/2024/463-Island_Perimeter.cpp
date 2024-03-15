// Shahadat Osman
// Date: 03-03-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int row, colm, cnt = 0;
    bool vis[105][105];
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

    bool valid(int x, int y)
    {
        if (x < 0 || x >= row || y < 0 || y >= colm)
            return false;
        else
            return true;
    }
    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;

        for (int i = 0; i < 4; i++)
        {
            int ci = si + dir[i].first;
            int cj = sj + dir[i].second;
            if (!valid(ci, cj) || grid[ci][cj] == 0)
                cnt++;
            else if (grid[ci][cj] == 1 && vis[ci][cj] == false)
                dfs(ci, cj, grid);
        }
    }
    int islandPerimeter(vector<vector<int>> &grid)
    {
        row = grid.size();
        colm = grid[0].size();

        for (int i = 0; i < row; i++)
            for (int j = 0; j < colm; j++)
            {
                if (grid[i][j] == 1 && vis[i][j] == false)
                    dfs(i, j, grid);
            }
        return cnt;
    }
};