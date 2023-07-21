#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, ind, a, b, max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        if (a > 10)
            continue;
        else
        {
            if (b > max)
            {
                max = b;
                ind = i;
            }
        }
    }
    cout << ind << "\n";
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