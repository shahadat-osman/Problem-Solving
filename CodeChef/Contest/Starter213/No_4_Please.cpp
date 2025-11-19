// Shahadat Osman
// Date: 19-11-2025
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int ans = 0;
        if (mp[2])
            ans = mp[2] - 1;
        if (mp[3] && mp[1])
        {
            ans += (min(mp[3], mp[1]));
        }
        cout << ans nl;
    }

    return 0;
}