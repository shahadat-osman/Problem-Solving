// Shahadat Osman
// Date: 14-08-2025
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

        vector<int> nums(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> nums[i];

        vector<int> pos(n + 1);

        for (int i = 1; i <= n; i++)
        {
            pos[nums[i]] = i;
        }

        int ans = 1;

        for (int i = 2; i <= n; i++)
        {
            if (pos[i - 1] > pos[i])
                ans++;
        }

        cout << ans nl;
    }

    return 0;
}