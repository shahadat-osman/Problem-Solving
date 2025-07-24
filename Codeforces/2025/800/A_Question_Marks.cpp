// Shahadat Osman
// Date: 01-06-2025
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
        string s;
        cin >> s;

        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '?')
                mp[s[i]]++;
        }
        int ans = 0;
        for (auto [x, y] : mp)
        {
            if (y >= n)
                ans += n;
            else
                ans += y;
        }
        cout << ans nl;
    }

    return 0;
}