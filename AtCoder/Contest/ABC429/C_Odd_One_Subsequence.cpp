// Shahadat Osman
// Date: 25-10-2025
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

    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        ll ans = 0;
        for (auto [x, y] : mp)
        {
            if (y > 1)
            {
                ll z = (1ll * y * (y - 1)) / 2;
                ans += (1LL * z * (n - y));
            }
        }
        cout << ans nl;
    }

    return 0;
}