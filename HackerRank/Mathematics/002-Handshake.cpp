#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ans;
    cin >> n;

    ans = n * (n - 1) / 2;
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