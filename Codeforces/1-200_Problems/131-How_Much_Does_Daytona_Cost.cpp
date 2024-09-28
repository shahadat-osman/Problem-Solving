// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, k, a, flag = 0;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a == k)
            flag = 1;
    }
    if (flag == 1)
        cout << "YES\n";
    else
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