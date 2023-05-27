// TAXES
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if (x > 100)
        cout << x - 10 << "\n";
    else
        cout << x << "\n";
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