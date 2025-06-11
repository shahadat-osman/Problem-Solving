// Shahadat Osman
// Date: 26-05-2025
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
        ll n, s;
        cin >> n >> s;

        vector<ll> a(n);
        for (auto &i : a)
            cin >> i;

        ll l = 0, r = 0, sum = 0, ans = 0;

        while (r < n)
        {
            sum += a[r];

            if (sum <= s)
                ans = max(ans, r - l + 1);

            else
            {
                while (sum > s)
                {
                    sum -= a[l];
                    l++;

                    if (sum >= s)
                        ans = max(ans, r - l + 1);
                }
            }
            r++;
        }
        if (sum != s)
            cout << -1 nl;
        else
            cout << n - ans nl;
    }

    return 0;
}