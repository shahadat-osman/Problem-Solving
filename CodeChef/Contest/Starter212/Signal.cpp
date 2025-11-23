// Shahadat Osman
// Date: 12-11-2025
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

        int ans = 0;
        bool zero = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero = true;
            if (s[i] == '1' && zero)
                ans++;
        }
        cout << ans nl;
    }

    return 0;
}