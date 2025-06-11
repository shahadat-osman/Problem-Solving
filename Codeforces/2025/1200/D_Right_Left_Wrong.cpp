// Shahadat Osman
// Date: 27-05-2025
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
        ll n, total = 0;
        cin >> n;

        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
            total += i;
        }
        string s;
        cin >> s;

        ll l = 0, r = n - 1, ans = 0;

        while (l < r)
        {
            if (s[l] == 'L' && s[r] == 'R')
            {
                ans += total;
                total -= a[l];
                l++;
                total -= a[r];
                r--;
            }
            else
            {
                if (s[l] != 'L')
                {
                    total -= a[l];
                    l++;
                }
                if (s[r] != 'R')
                {
                    total -= a[r];
                    r--;
                }
            }
        }
        cout << ans nl;
    }

    return 0;
}