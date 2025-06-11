// Shahadat Osman
// Date: 27-05-2025
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
        ll n, k;
        cin >> n >> k;

        vector<int> a(n), h(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : h)
            cin >> i;

        ll l = 0, r = 0, sum = 0, ans = 0;

        while (r < n)
        {
            sum += a[r];
            if ((r + 1) < n && (sum <= k) && (h[r] % h[r + 1] == 0))
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                if ((r + 1) < n && (h[r] % h[r + 1] != 0))
                {
                    if (sum <= k)
                    {
                        ans = max(ans, r - l + 1);
                    }
                    sum = 0;
                    l = r + 1;
                }
                else
                {
                    if (sum <= k)
                    {
                        ans = max(ans, r - l + 1);
                    }
                    sum -= a[l];
                    l++;
                }
            }
            r++;
        }
        cout << ans nl;
    }

    return 0;
}