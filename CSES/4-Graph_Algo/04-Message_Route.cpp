// Shahadat Osman
// Date: 15-03-2024
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 100;
vector<int> v[N];
bool vis[N];
int parent[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int pr = q.front();
        q.pop();

        for (int child : v[pr])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                parent[child] = pr;
            }
        }
    }
}
int main()
{
    int n, e, des;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    if (v[1].empty())
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    bfs(1);

    vector<int> path;
    des = n;

    if (parent[des] == -1)
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    
    while (des != -1)
    {
        path.push_back(des);
        des = parent[des];
    }

    if (path.empty())
        cout << "IMPOSSIBLE\n";

    else
    {
        reverse(path.begin(), path.end());

        cout << path.size() << "\n";
        for (int print : path)
        {
            cout << print << " ";
        }
        cout << "\n";
    }

    return 0;
}