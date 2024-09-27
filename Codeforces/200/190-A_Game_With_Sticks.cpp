// Shahadat Osman
//  Date: 27-09-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    if (n == m)
    {
        if (n % 2 == 0)
            cout << "Malvika\n";

        else
            cout << "Akshat\n";
    }
    else
    {
        if (min(n, m) % 2 == 0)
            cout << "Malvika\n";
        else
            cout << "Akshat\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}