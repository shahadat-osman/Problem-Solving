#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        if (c % 2 == 0)
        {
            cout << "Second\n";
            return;
        }
        if (c % 2 != 0)
        {
            cout << "First\n";
            return;
        }
    }
    if (a > b)
    {
        cout << "First\n";
        return;
    }
    if (a < b)
    {
        cout << "Second\n";
        return;
    }
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