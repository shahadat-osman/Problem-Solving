// Shahadat Osman
// Date: 12-10-2025
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
        int n;
        cin >> n;
        vector<pair<int, int>> a, b, c;

        priority_queue<pair<int, int>> pq1, pq2, pq3;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq1.push({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq2.push({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq3.push({x, i});
        }

        int m = 3;
        while (m--)
        {
            a.push_back({pq1.top().first, pq1.top().second});
            pq1.pop();
        }
        m = 3;
        while (m--)
        {
            b.push_back({pq2.top().first, pq2.top().second});
            pq2.pop();
        }
        m = 3;
        while (m--)
        {
            c.push_back({pq3.top().first, pq3.top().second});
            pq3.pop();
        }

        ll sum = 0, mx = 0;
        for (int i = 0; i < 3; i++)
        {
            sum = 0;
            sum += a[i].first;
            for (int j = 0; j < 3; j++)
            {
                if (a[i].second == b[j].second)
                    continue;
                sum += b[j].first;
                for (int k = 0; k < 3; k++)
                {
                    if (c[k].second == a[i].second || c[k].second == b[j].second)
                        continue;
                    sum += c[k].first;
                    mx = max(mx, sum);
                    sum -= c[k].first;
                }
                sum -= b[j].first;
            }
        }
        cout << mx nl;
    }

    return 0;
}