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
    vector<vector<int>> v;
    vector<bool> vis;

    void dfs(int src)
    {
        vis[src] = true;

        for (auto child : v[src])
        {
            if (!vis[child])
            {
                dfs(child);
            }
        }
    }

    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        v.resize(n);
        vis.resize(n, false);

        for (const auto &edge : edges)
        {
            int a = edge[0];
            int b = edge[1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(source);

        return vis[destination];
    }
};