// Shahadat Osman
// Date: 15-03-2024
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int n, m;
char grid[N][N], path[N][N], nev;
bool vis[N][N], found = false;
vector<char> s;
string str;
vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

bool valid(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
        return false;
    return true;
}

void backtrack(int si, int sj, int cr_i, int cr_j)
{

    while (1)
    {
        if (cr_i == si && cr_j == sj)
            break;
        s.push_back(path[cr_i][cr_j]);

        if (path[cr_i][cr_j] == 'U')
            cr_i++;
        else if (path[cr_i][cr_j] == 'D')
            cr_i--;
        else if (path[cr_i][cr_j] == 'L')
            cr_j++;
        else if (path[cr_i][cr_j] == 'R')
            cr_j--;
    }
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        int cur_i = cur.first;
        int cur_j = cur.second;

        for (int i = 0; i < 4; i++)
        {
            if (i == 0)
                nev = 'R';
            else if (i == 1)
                nev = 'D';
            else if (i == 2)
                nev = 'U';
            else if (i == 3)
                nev = 'L';

            int ci = cur_i + dir[i].first;
            int cj = cur_j + dir[i].second;

            if (grid[ci][cj] == 'B')
            {
                path[ci][cj] = nev;
                found = true;
                backtrack(si, sj, ci, cj);
                return;
            }
            else if (valid(ci, cj) && vis[ci][cj] == false && grid[ci][cj] == '.')
            {
                vis[ci][cj] = true;
                path[ci][cj] = nev;
                q.push({ci, cj});
            }
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
    {
        for (int j = 0; j < m; j++)
            path[i][j] = '.';
        cout << "\n";
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (grid[i][j] == 'A')
            {
                found = false;
                bfs(i, j);
                if (found == true)
                {
                    cout << "YES\n"
                         << s.size() << "\n";
                    reverse(s.begin(), s.end());
                    for (char pr : s)
                        cout << pr;
                    cout << "\n";
                }
                else
                    cout << "NO\n";
            }

    return 0;
}