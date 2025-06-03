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
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        vector<int> ans;
        int l = 0, r = 0;
        bool flg = false;
        while (l < n || r < m)
        {
            if (a[l] != 0 && a[l] <= k && l<n)
            {
                ans.push_back(a[l]);
                l++;
            }
            else if (b[r] != 0 && b[r] <= k && r<m)
            {
                ans.push_back(b[r]);
                r++;
            }
            else if (a[l] == 0 && l<n)
            {
                ans.push_back(a[l]);
                l++;
                k++;
            }

            else if ( b[r] == 0 && r<m)
            {
                ans.push_back(b[r]);
                r++;
                k++;
            }
            else
            {
                flg = true;
                break;
            }
        }
        if (flg)
            cout << -1 nl;
        else
        {
            for (int i = 0; i < n + m; i++)
            {
                cout << ans[i] << " ";
            }
            cout nl;
        }
    }

    return 0;
}