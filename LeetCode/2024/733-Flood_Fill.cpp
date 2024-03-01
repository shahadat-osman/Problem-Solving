// Shahadat Osman
// Date: 01-03-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int row, colm;
    bool vis[55][55];
    vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

    bool valid(int i, int j)
    {
        if (i < 0 || i >= row || j < 0 || j >= colm)
            return false;

        return true;
    }

    void dfs(vector<vector<int>> &img, int x, int y, int cur_col, int color)
    {
        img[x][y] = color;
        vis[x][y] = true;

        for (int i = 0; i < 4; i++)
        {
            int ci = x + dir[i].first;
            int cj = y + dir[i].second;

            if (valid(ci, cj) && vis[ci][cj] == false &&
                img[ci][cj] == cur_col)
            {
                dfs(img, ci, cj, cur_col, color);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &img, int sr, int sc,
                                  int color)
    {
        row = img.size();
        colm = img[0].size();

        int cur_col = img[sr][sc];

        memset(vis, false, sizeof(vis));

        dfs(img, sr, sc, cur_col, color);

        return img;
    }
};