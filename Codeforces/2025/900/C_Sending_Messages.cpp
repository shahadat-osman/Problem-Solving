// Shahadat Osman
// Date: 26-08-2025
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
        ll n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<ll> moments(n);
        for (auto &i : moments)
            cin >> i;

        ll cur = 0;

        for (int i = 0; i < n; i++)
        {
            ll tmp = min(((moments[i] - cur) * a), b);
            f -= tmp;
            cur = moments[i];
        }
        if (f >= 1)
            yes();
        else
            no();
    }

    return 0;
}