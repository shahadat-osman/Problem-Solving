// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, diff, moves = 0;
    cin >> a >> b;
    diff = abs(a - b);
    if (diff == 0)
        moves = 0;
    else if (diff % 10 == 0)
        moves = diff / 10;
    else if (diff % 10 != 0)
        moves = (diff / 10) + 1;

    cout << moves << "\n";
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