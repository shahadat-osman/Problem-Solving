//  RCT

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w, l;
    cin >> w >> l;

    if (w % 2 != 0 && l % 2 != 0)
        cout << "NO\n";
    else
        cout << "YES\n";
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