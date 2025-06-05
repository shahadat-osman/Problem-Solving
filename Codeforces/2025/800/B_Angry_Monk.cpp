// Shahadat Osman
// Date: 31-05-2025
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
        int k, n;
        cin >> k >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        sort(v.begin(), v.end());

        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == 1)
                ans++;
            else
            {
                ans += (v[i] + v[i] - 1);
            }
        }
        cout << ans nl;
    }

    return 0;
}