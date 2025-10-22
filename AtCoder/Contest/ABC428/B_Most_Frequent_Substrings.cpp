// Shahadat Osman
// Date: 18-10-2025
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

    int t = 1;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<string, int> mp;

        int l = 0, r = 0;
        while (r < n)
        {
            if (r - l + 1 == k)
            {
                string str = s.substr(l, k);
                mp[str]++;
            }
            else if (r - l + 1 > k)
            {
                l++;
                if (r - l + 1 == k)
                {
                    string str = s.substr(l, k);
                    mp[str]++;
                }
            }
            r++;
        }
        int mx = 0;
        for (auto [x, y] : mp)
        {
            if (y > mx)
            {
                mx = y;
            }
        }
        vector<string> v;
        for (auto [x, y] : mp)
        {
            if (y == mx)
                v.push_back(x);
        }
        cout << mx nl;
        for (auto val : v)
            cout << val sp;
        cout nl;
    }

    return 0;
}