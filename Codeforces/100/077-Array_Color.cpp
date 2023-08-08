#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, j, total = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    bool ans = false;
    int sub_t = 0, rem;
    for (i = 0; i < n - 1; i++)
    {
        sub_t += a[i];
        rem = total - sub_t;
        if ((rem % 2 == 0 && sub_t % 2 == 0) || (rem % 2 != 0 && sub_t % 2 != 0))
        {
            ans = true;
            break;
        }
    }
    if (ans)
    {
        cout << "YES\n";
    }
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
