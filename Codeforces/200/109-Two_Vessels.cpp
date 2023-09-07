// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double a, b, c, diff;
    int moves;
    cin >> a >> b >> c;

    if (a == b)
    {
        moves = 0;
        cout << moves << "\n";
        return;
    }
    double minn = min(a, b);
    diff = ((a + b) / 2) - minn;
    int ans = diff / c;
    if ((ans * c) != diff)
    {
        ans++;
        cout << ans << "\n";
        return;
    }
    else
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