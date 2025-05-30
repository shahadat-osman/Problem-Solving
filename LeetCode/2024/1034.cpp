// Shahadat Osman
// Date: 05-12-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    int n, m;
    int oldColor;
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    bool vis[55][55];
    bool valid2(int i, int j)
    {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }
    bool valid(int i, int j)
    {
        if (((i == 0 || i == n - 1) && (j >= 0 && j < m)) || ((j == 0 || j == m - 1) && (i >= 0 && i < n)))
            return true;
        else
            return false;
    }
    void dfs(int si, int sj, int &newColor, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        if (valid(si, sj))
            grid[si][sj] = newColor;
        for (pair<int, int> child : dir)
        {
            int ci = child.first + si;
            int cj = child.second + sj;
            if (valid2(ci, cj) && !vis[ci][cj] && grid[ci][cj] != oldColor)
                grid[si][sj] = newColor;
            if (valid2(ci, cj) && !vis[ci][cj] && grid[ci][cj] == oldColor)
            {
                dfs(ci, cj, newColor, grid);
            }
        }
    }

    vector<vector<int>> colorBorder(vector<vector<int>> &grid, int row, int col, int newColor)
    {
        n = grid.size();
        m = grid[0].size();
        oldColor = grid[row][col];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                vis[i][j] = false;

        dfs(row, col, newColor, grid);
        return grid;
    }
};