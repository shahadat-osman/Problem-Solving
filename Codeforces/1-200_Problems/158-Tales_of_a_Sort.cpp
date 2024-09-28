// Shahadat Osman
// 1856A
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, operation = 0;

    cin >> n;

    vector<int> vect(n), sortvect(n);
    for (i = 0; i < n; i++)
    {
        cin >> vect[i];
        sortvect[i] = vect[i];
    }

    sort(sortvect.begin(), sortvect.end());

    for (i = n - 1; i >= 0; i--)
    {
        if (sortvect[i] != vect[i])
        {
            operation = sortvect[i];
            break;
        }
    }

    cout << operation << "\n";
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