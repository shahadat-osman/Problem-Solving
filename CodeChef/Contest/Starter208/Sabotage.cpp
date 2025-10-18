// Shahadat Osman
// Date: 15-10-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define endl '\n'
#define nl << '\n'
#define sp << ' '

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        while (k--)
        {
            pq.pop();
            x += 100;
        }
        int ans = 1;
        while (!pq.empty())
        {
            if (x >= pq.top())
                break;
            else
            {
                ans++;
                pq.pop();
            }
        }
        cout << ans nl;
    }

    return 0;
}