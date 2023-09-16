// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, j;

    cin >> n;

    vector<int> vect(n+1);
    for (i = 1; i <= n; i++)
        cin >> vect[i];

    bool flag = false;
    for (i = 1; i <= n; i++)
    {
        if (i >= vect[i])
        {
            flag = true;
            break;
        }
    }
    if (flag)
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