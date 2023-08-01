#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i, j;
    string a, b;
    for (i = 0; i < 8; i++)
    {
        cin >> a;
        for (j = 0; j < 8; j++)
        {
            if (a[j] != '.')
                b += a[j];
        }
    }

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