// Shahadat Osman
// Date: 10-08-2025
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
        ll n, t;
        cin >> n >> t;
        vector<int> machines(n);
        for (auto &i : machines)
            cin >> i;
 
        auto ok = [&](ll seconds)
        {
            ll cnt = 0;
            for (int i = 0; i < n; i++)
            {
                cnt += (seconds / machines[i]);
                if (cnt >= t)
                    return true;
            }
            return false;
        };
 
        ll l = 1, r = 1e18, ans = 0;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans nl;
    }
 
    return 0;
}
