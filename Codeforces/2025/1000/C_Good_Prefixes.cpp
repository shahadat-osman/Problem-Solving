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

        ll maxx = 0, prfx_sum = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            prfx_sum += nums[i];
            if (nums[i] > maxx)
            {
                maxx = nums[i];
            }
            if ((prfx_sum - maxx) == maxx)
            {
                count++;
            }
        }
        cout << count nl;
    }

    return 0;
}