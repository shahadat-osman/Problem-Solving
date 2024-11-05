// Shahadat Osman
//  Date: 03-11-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;

    int similar = 0, i = 0;
    int s_sz = s.size();
    int t_sz = t.size();
    while (true)
    {
        if (i == min(s_sz, t_sz))
            break;
        if (s[i] != t[i])
            break;
        if (s[i] == t[i])
            similar++;
        i++;
    }
    int count = 0;
    int remain = s_sz - similar;
    count += remain;

    remain = t_sz - similar;
    count += remain;

    if (similar != 0)
        count += (similar + 1);

    cout << count << "\n";
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
