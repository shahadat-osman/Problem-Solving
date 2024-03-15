// Shahadat Osman
// Date: 15-03-2024
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int n, m, found = false;
char grid[N][N];
bool vis[N][N];
int apt = 0;
vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

bool valid(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + dir[i].first;
        int cj = sj + dir[i].second;

        if (valid(ci, cj) && grid[ci][cj] == '.' &&
            vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (grid[i][j] == '.' && vis[i][j] == false)
            {
                dfs(i, j);
                apt++;
            }

    cout << apt << "\n";

    return 0;
}