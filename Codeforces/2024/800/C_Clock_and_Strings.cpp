// Shahadat Osman
//  Date: 01-11-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a < b)
    {
        if (((c >= a && c <= b) && (d < a || d > b)) || ((d >= a && d <= b) && (c < a || c > b)))
        {
            cout << "YES\n";
            return;
        }
    }
    else if (a > b)
    {
        if (((c >= b && c <= a) && (d < b || d > a)) || ((d >= b && d <= a) && (c < b || c > a)))
        {
            cout << "YES\n";
            return;
        }
    }
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