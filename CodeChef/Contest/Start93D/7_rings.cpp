//  SEVENRINGS

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, count = 0;
    cin >> n >> x;
    int cost = n * x;

    int mod;
    while (cost > 0)
    {
        mod = cost % 10;
        cost /= 10;
        count++;
    }
    if (count == 5 && mod != 0)
        cout << "YES\n";
    else
        cout << "NO\n";
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