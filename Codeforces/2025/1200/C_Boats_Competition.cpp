// Shahadat Osman
// Date: 30-05-2025
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
        vector<int> v(n);
        for (auto &j : v)
            cin >> j;

        sort(v.begin(),v.end());
        int sz = n * 2;
        vector<int> frq(sz+1, 0);

        int ans = 0;
        for (int i = 1; i <= sz; i++)
        {
            int l = 0, r = n - 1;
            while (l < r)
            {
                if ((v[l] + v[r]) == i)
                {
                    frq[i]++;
                    l++;
                    r--;
                }
                else if ((v[l] + v[r]) > i)
                {
                    r--;
                }
                else if ((v[l] + v[r]) < i)
                {
                    l++;
                }
            }
            // cout << i << " " << frq[i] nl;
            ans = max(ans, frq[i]);
        }
        cout << ans nl;
    }

    return 0;
}