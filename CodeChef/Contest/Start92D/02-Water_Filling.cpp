//  WATERFILLING

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int b1, b2, b3, ans;
    cin >> b1 >> b2 >> b3;

    if ((b1 == 1 && b2 == 1 && b3 == 1) || (b1 == 0 && b2 == 1) || (b1 == 0 && b3 == 1) || (b2 == 0 && b3 == 1))
        ans = 1;
    if ((b1 == 0 && b2 == 0 && b3 == 0) || (b1 == 0 && b2 == 0) || (b1 == 0 && b3 == 0) || (b2 == 0 && b3 == 0))
        ans = 0;

    if (ans == 0)
        cout << "Water filling time\n";
    else
        cout << "Not now\n";
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