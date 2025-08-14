// Shahadat Osman
// Date: 13-08-2025
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
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        ll mid = nums[n / 2], ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += abs(nums[i] - mid);
        }
        cout << ans nl;
    }

    return 0;
}