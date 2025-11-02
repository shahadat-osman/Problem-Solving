// Shahadat Osman
// Date: 30-10-2025
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
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int q = 0;
        int ans = -1;
        while (q <= 5)
        {
            int l = 0, r = 0;

            while (r < x.size())
            {
                if (r - l + 1 == m)
                {
                    string str = x.substr(l, m);
                    if (str == s)
                    {
                        ans = q;
                        break;
                    }
                }
                if (r - l + 1 > m)
                {
                    l++;
                    if (r - l + 1 == m)
                    {
                        string str = x.substr(l, m);
                        if (str == s)
                        {
                            ans = q;
                            break;
                        }
                    }
                }
                r++;
            }
            if (ans > -1)
                break;
            x += x;
            q++;
        }
        cout << ans nl;
    }

    return 0;
}