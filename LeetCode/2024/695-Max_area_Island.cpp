// Shahadat Osman
// Date: 03-03-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int row, colm, cnt, mx = 0;
    bool vis[55][55];
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    
    bool valid(int x, int y)
    {
        if (x < 0 || x >= row || y < 0 || y >= colm)
            return false;
        return true;
    }

    void dfs(int a, int b, vector<vector<int>> &grid)
    {
        vis[a][b] = true;
        cnt++;

        for (int i = 0; i < 4; i++)
        {
            int j = a + dir[i].first;
            int k = b + dir[i].second;
            if (valid(j, k) && grid[j][k] == 1 && vis[j][k] == false)
                dfs(j, k, grid);
        }
    }
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        row = grid.size();
        colm = grid[0].size();

        for (int i = 0; i < row; i++)
            for (int j = 0; j < colm; j++)
                if (grid[i][j] == 1 && vis[i][j] == false)
                {
                    cnt = 0;
                    dfs(i, j, grid);
                    if (cnt > mx)
                        mx = cnt;
                }
        return mx;
    }
};