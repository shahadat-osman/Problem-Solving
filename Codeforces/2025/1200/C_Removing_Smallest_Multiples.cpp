// Shahadat Osman
// Date: 12-10-2025
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
        string s;
        cin >> s;

        vector<bool> is_deleted(n + 1, false);

        ll ans = 0;

        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '0')
            {
                for (int j = i; j <= n; j += i)
                {
                    if (s[j - 1] == '0' && is_deleted[j] == false)
                    {
                        ans += i;
                        is_deleted[j] = true;
                    }
                    if (s[j - 1] == '1')
                        break;
                }
            }
        }
        cout << ans nl;
    }

    return 0;
}