// Shahadat Osman
//  Date: 05-12-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> str;
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        string s = str[i];
        int sz = s.size();
        if (sz > (m - sum))
            break;
        if (sz <= (m - sum))
        {
            sum += sz;
            cnt++;
        }
    }
    cout << cnt << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
