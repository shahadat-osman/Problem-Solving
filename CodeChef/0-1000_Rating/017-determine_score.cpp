// DETSCORE

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    int ans = (x / 10) * y;
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