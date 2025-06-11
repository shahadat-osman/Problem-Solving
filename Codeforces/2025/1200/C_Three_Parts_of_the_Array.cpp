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

    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;

        ll a = v[0], b = v[n - 1], ans = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (a == b)
            {
                ans = max(ans, a);
                l++;
                a += v[l];
                r--;
                b += v[r];
            }
            else if (a > b)
            {
                r--;
                b += v[r];
            }
            else
            {
                l++;
                a += v[l];
            }
        }
        cout << ans nl;
    }

    return 0;
}