// Shahadat Osman
// Date: 03-12-2024
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class edge
{
public:
    int u, v;
    ll w;
    edge(int u, int v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

const int N = 1e5 + 5;
vector<vector<int>> adj;
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

bool comp(edge a, edge b)
{
    return a.w < b.w;
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
    cin >> n >> e;

    dsu_init(n);
    adj.resize(n + 1);
    vector<edge> v;

    while (e--)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        adj[a].push_back(b);
        adj[b].push_back(a);
        v.push_back(edge(a, b, c));
    }

    ll component = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            component++;
        }
    }

    if (component > 1)
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    ll cost = 0;
    sort(v.begin(), v.end(), comp);
    for (edge ed : v)
    {
        int ld1 = dsu_find(ed.u);
        int ld2 = dsu_find(ed.v);

        if (ld1 != ld2)
        {
            cost += ed.w;
            dsu_union(ed.u, ed.v);
        }
    }

    cout << cost << "\n";

    return 0;
}
