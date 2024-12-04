// Shahadat Osman
// Date: 03-12-2024
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class edge
{
public:
    int u;
};
const int N = 1005;
vector<vector<int>> adj;
vector<edge> lst;
int parent[N];
int sz[N];
bool vis[N];

void dsu_init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
        vis[i] = false;
    }
}

int dsu_find(int x)
{
    if (parent[x] == x)
        return x;
    parent[x] = dsu_find(parent[x]);
    return parent[x];
}

void dsu_union(int node1, int node2)
{
    int ld1 = dsu_find(node1);
    int ld2 = dsu_find(node2);

    if (sz[ld1] > sz[ld2])
    {
        parent[ld2] = ld1;
        sz[ld1] += sz[ld2];
    }
    else
    {
        parent[ld1] = ld2;
        sz[ld2] += sz[ld1];
    }
}

void dfs(int src)
{
    vis[src] = true;
    for (int child : adj[src])
    {
        if (!vis[child])
            dfs(child);
    }
}

int main()
{
    int n, e;
    cin >> n;
    e = n - 1;

    dsu_init(n);
    adj.resize(n + 1);

    vector<int> component;
    vector<pair<int, int>> newRoad;
    vector<pair<int, int>> oldRoad;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            component.push_back(i);
            dfs(i);
        }
    }
    for (int i = 0; i < component.size() - 1; i++)
    {
        newRoad.push_back({component[i], component[i + 1]});
    }

    for (int i = 1; i <= n; i++)
    {
        for (int val : adj[i])
        {
            if (val > i)
            {
                int ld1 = dsu_find(i);
                int ld2 = dsu_find(val);

                if (ld1 == ld2)
                {
                    oldRoad.push_back({i, val});
                }
                else
                {
                    dsu_union(i, val);
                }
            }
        }
    }

    cout << oldRoad.size() << "\n";

    for (int i = 0; i < oldRoad.size(); i++)
    {
        pair<int, int> old = oldRoad[i];
        pair<int, int> newRd = newRoad[i];

        cout << old.first << " " << old.second << " " << newRd.first << " " << newRd.second << "\n";
    }

    return 0;
}
