// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;

    if (b > a)
        count++;
    if (c > a)
        count++;
    if (d > a)
        count++;

    cout << count << "\n";
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