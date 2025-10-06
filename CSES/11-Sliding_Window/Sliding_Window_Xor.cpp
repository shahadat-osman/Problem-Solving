// Shahadat Osman
// Date: 02-10-2025
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
        ll n, k;
        cin >> n >> k;

        ll x, a, b, c;
        cin >> x >> a >> b >> c;

        vector<ll> nums(n);
        nums[0] = x;

        for (ll i = 1; i < n; i++)
        {
            nums[i] = ((a * nums[i - 1]) + b) % c;
        }

        ll l = 0, r = 0, sum = 0, SUM = 0;

        while (r < n)
        {
            sum ^= nums[r];
            if ((r - l + 1) == k)
            {
                SUM ^= sum;
            }
            else if ((r - l + 1) > k)
            {
                sum ^= nums[l];
                l++;
                if ((r - l + 1) == k)
                {
                    SUM ^= sum;
                }
            }
            r++;
        }
        cout << SUM nl;
    }

    return 0;
}