//

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if (x <= 3)
        cout << "BRONZE\n";
    if (x > 3 && x <= 6)
        cout << "SILVER\n";
    if (x > 6)
        cout << "GOLD\n";
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