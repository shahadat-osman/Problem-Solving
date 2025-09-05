// Shahadat Osman
// Date: 24-08-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "Yes\n"
#define no() cout << "No\n"
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
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        ll ans = 0;
        for (int i = n - 1; i >= 0; i -= 2)
        {
            ans += nums[i];
        }
        cout << ans nl;
    }

    return 0;
}