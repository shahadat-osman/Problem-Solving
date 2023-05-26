// IPLTRSH
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y, ans;
    cin >> x >> y;
    if (x <= y)
        ans = 0;
    else
        ans = x - y;

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