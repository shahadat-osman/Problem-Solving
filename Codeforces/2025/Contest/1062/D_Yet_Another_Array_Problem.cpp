// Shahadat Osman
// Date: 28-10-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define endl '\n'
#define nl << '\n'
#define sp << ' '

ll gcd(ll a, ll b)
{
    ll k;
    if (a >= b)
        k = b;
    else
        k = a;
    ll G;
    for (ll i = 1; i <= k; i++)
    {
        if (a % i == 0 && b % i == 0)
            G = i;
    }
    return G;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            st.insert(x);
        }
        ll z = 0;
        for (ll i = 2; i <= 10e18; i++)
        {
            for (auto val : st)
            {
                if (gcd(i, val) == 1)
                {
                    cout << i;
                    z = 1;
                    break;
                }
            }
            if (z)
                break;
        }
        if (!z)
            cout << -1;
        cout nl;
    }

    return 0;
}