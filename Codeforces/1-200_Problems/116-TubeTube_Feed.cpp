// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, t, i, j, s, most_ent = 0, ind = 0;
    cin >> n >> t;

    vector<int> a(n + 1), b(n + 1);

    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
        cin >> b[i];

    bool has = false;
    for (i = 1, s = 0; i <= n; i++, s++)
    {
        if ((a[i] + s) > t)
            continue;

        else
        {
            if (b[i] > most_ent)
            {
                most_ent = b[i];
                ind = i;
                has = true;
            }
        }
    }
    if (has)
        cout << ind << "\n";
    else
        cout << "-1\n";
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