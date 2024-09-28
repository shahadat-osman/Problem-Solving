// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, j, even = 0, odd = 0;
    cin >> n;
    vector<int> vect(n);
    for (i = 0; i < n; i++)
    {
        cin >> vect[i];
        if (vect[i] % 2 == 0)
            even += vect[i];

        else
            odd += vect[i];
    }
    if (even > odd)
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