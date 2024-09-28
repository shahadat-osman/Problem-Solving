// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, mini = 9999, once = 1;
    long long big_prod = 1;
    cin >> n;
    vector<int> vect(n);

    for (i = 0; i < n; i++)
    {
        cin >> vect[i];
        if (vect[i] < mini)
            mini = vect[i];
    }
    for (i = 0; i < n; i++)
    {
        if (vect[i] == mini && once != 0)
        {
            vect[i] += 1;
            once--;
        }
        big_prod *= vect[i];
    }
    cout << big_prod << "\n";
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