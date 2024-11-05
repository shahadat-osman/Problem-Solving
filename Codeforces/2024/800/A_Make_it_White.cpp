// Shahadat Osman
//  Date: 05-11-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int sz = s.size();
    int i = 0, j = sz - 1, left = -1, right = sz + 1;
    bool f1 = false, f2 = false;
    while (true)
    {
        if (s[i] == 'B' && left < 0)
        {
            left = i;
            f1 = true;
        }
        if (s[j] == 'B' && right > sz)
        {
            right = j;
            f2 = true;
        }
        if (f1 && f2)
            break;

        i++, j--;
    }
    int ans = (right - left) + 1;
    cout << ans << "\n";
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
