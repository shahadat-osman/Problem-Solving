// Shahadat Osman
// Date: 04-12-2024
#include <bits/stdc++.h>
#define ll long long int
#define pr pair<ll, ll>
using namespace std;
const ll N = 1e5 + 5;

vector<pr> v[N];
ll dis[N];
ll parent[N];

class comp
{
public:
    bool operator()(pr a, pr b)
    {
        return a.second > b.second;
    }
};

void dijkstra(ll src)
{
    priority_queue<pr, vector<pr>, comp> q;
    q.push({src, 0});
    dis[src] = 0;

    while (!q.empty())
    {
        pr frnt = q.top();
        q.pop();
        ll node = frnt.first;
        ll node_cost = frnt.second;

        for (pr child : v[node])
        {
            ll child_node = child.first;
            ll child_cost = child.second;
            if ((node_cost + child_cost) < dis[child_node])
            {
                dis[child_node] = node_cost + child_cost;
                q.push({child_node, dis[child_node]});
                parent[child_node] = node;
            }
        }
    }
}

int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }

    dijkstra(1);

    if (dis[n] == LLONG_MAX)
        cout << -1 << "\n";
    else
    {
        vector<ll> path;
        ll x = n;
        while (x != -1)
        {
            path.push_back(x);
            x = parent[x];
        }
        reverse(path.begin(), path.end());
        for (ll v : path)
            cout << v << " ";
        cout << "\n";
    }

    return 0;
}
