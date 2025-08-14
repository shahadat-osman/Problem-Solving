// Shahadat Osman
// Date: 11-08-2025
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
        int n, x;
        cin >> n >> x;
 
        vector<int> nums(n);
        for (auto &i : nums)
            cin >> i;
 
        sort(nums.begin(), nums.end());
 
        int l = 0, r = n - 1, ans = 0;
        while (l < r)
        {
            if (nums[l] + nums[r] <= x)
                l++, r--;
            else
                r--;
            ans++;
        }
        if (l == r)
            ans++;
 
        cout << ans nl;
    }
 
    return 0;
}