// Shahadat Osman
// Date: 21-07-2025
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

    int t = 1;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                if ((n / i) != i)
                    v.push_back(n / i);
            }
        }
        if (v.size() < k)
            cout << -1 nl;
        else
        {
            sort(v.begin(), v.end());
            cout << v[k - 1] nl;
        }
    }

    return 0;
}