// Shahadat Osman
// Date: 24-07-2025
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        int q;
        cin >> q;
        while (q--)
        {
            int m;
            cin >> m;
            int ans;
            auto it = upper_bound(v.begin(), v.end(), m);

            ans = (it - v.begin());
            cout << ans nl;
        }
    }

    return 0;
}