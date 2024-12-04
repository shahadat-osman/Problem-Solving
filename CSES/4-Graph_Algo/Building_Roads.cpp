// Shahadat Osman
// Date: 02-12-2024
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;
vector<bool> vis;

void dfs(int src)
{
    vis[src] = true;
    for (int child : v[src])
    {
        if (!vis[child])
            dfs(child);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    v.resize(n + 1);
    vis.resize(n + 1, false);

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<int> comp;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            comp.push_back(i);
            dfs(i);
        }
    }
    cout << comp.size() - 1 << endl;

    for (int i = 0; i < comp.size() - 1; i++)
    {
        cout << comp[i] << " " << comp[i + 1] << "\n";
    }

    return 0;
}
