// Shahadat Osman
// Date: 28-09-2025
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
        vector<int> nums(n);
        for (int &i : nums)
            cin >> i;

        ll l = 0, r = 0, sum = 0, ans = 0;

        while (r < n)
        {
            sum += nums[r];
            if (sum <= k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (sum > k)
                {
                    sum -= nums[l];
                    l++;
                }
            }
            r++;
        }
        cout << ans nl;
    }

    return 0;
}