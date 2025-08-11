// Shahadat Osman
// Date: 09-08-2025
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
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums)
            cin >> i;

        bool non_zero = false;
        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (!non_zero && nums[i] > 0)
                non_zero = true;
            if (non_zero)
            {
                if (nums[i] == 0)
                    ans++;
                else if (nums[i] > 0)
                    ans += nums[i];
            }
        }
        cout << ans nl;
    }

    return 0;
}