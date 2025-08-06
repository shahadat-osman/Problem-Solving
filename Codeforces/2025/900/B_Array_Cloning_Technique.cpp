// Shahadat Osman
// Date: 06-08-2025
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
        map<int, int> nums;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            nums[x]++;
        }
        int maxx = 0;
        for (auto [x, y] : nums)
        {
            maxx = max(maxx, y);
        }

        int ans = 0, elem = n - maxx;
        while (maxx < n)
        {
            maxx += maxx;
            ans++;
        }
        cout << ans + elem nl;
    }

    return 0;
}