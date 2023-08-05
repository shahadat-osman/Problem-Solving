#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, ans;
    cin >> a >> b;
    if (a % b == 0)
        ans = 0;
    else
        ans = b - (a % b);
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