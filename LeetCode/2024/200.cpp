// Shahadat Osman
// Date: 02-12-2024
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
    bool vis[305][305];
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }
    void dfs(int si, int sj, vector<vector<char>> &grid)
    {
        vis[si][sj] = true;
        for (pair<int, int> d : dir)
        {
            int ci = si + d.first;
            int cj = sj + d.second;
            if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '1')
                dfs(ci, cj, grid);
        }
    }
    int numIslands(vector<vector<char>> &grid)
    {
        n = grid.size();
        m = grid[0].size();
        int component = 0;

        memset(vis, false, sizeof(vis));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == '1')
                {
                    dfs(i, j, grid);
                    component++;
                }
            }
        }
        return component;
    }
};