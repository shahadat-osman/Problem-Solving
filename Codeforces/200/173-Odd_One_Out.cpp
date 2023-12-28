// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && (a != c || b != c))
        cout << c << "\n";
    else if (b == c && (b != a || c != a))
        cout << a << "\n";
    else if (a == c && (a != b || c != b))
        cout << b << "\n";
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