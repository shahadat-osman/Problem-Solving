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
    bool flg = true;
    bool vis[505][505];
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

    bool valid(int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    void dfs(int si, int sj, vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        vis[si][sj] = true;

        if (grid1[si][sj] != 1)
            flg = false;

        for (pair<int, int> child : dir)
        {
            int ci = si + child.first;
            int cj = sj + child.second;

            if (valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj] == 1)
                dfs(ci, cj, grid1, grid2);
        }
    }
    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        n = grid2.size();
        m = grid2[0].size();
        int sub_island = 0;

        memset(vis, false, sizeof(vis));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid2[i][j] == 1)
                {
                    flg = true;

                    dfs(i, j, grid1, grid2);

                    if (flg)
                        sub_island++;
                }
            }
        }

        return sub_island;
    }
};