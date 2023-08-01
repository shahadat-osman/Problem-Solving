#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, j, count = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] > b[i])
            count++;
    }
    cout << count << "\n";
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