// Shahadat Osman
// Date: 23-05-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "Yes\n"
#define no() cout << "No\n"
#define endl '\n'
#define nl << '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, c, cnt = 0;
        cin >> n >> c;
        multiset<ll> ml;
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            ml.insert(x + i);
        }
        for (auto val : ml)
        {
            if (val <= c)
            {
                cnt++;
                c -= val;
            }
        }
        cout << cnt nl;
    }

    return 0;
}