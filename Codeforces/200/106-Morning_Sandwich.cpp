// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int b, c, h, total_ch, layer;
    cin >> b >> c >> h;
    total_ch = c + h;
    if ((b - 1) <= total_ch)
        layer = b + (b - 1);
    else if ((b - 1) > total_ch)
    {
        layer = total_ch + (total_ch + 1);
    }
    cout << layer << "\n";
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