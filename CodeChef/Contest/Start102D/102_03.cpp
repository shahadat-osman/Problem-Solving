// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, mini, total = 0;
    cin >> n;
    vector<int> vect(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vect[i];
        total += vect[i];
    }

    mini = *min_element(vect.begin(), vect.end());
    total -= mini;

    cout << total << "\n";
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