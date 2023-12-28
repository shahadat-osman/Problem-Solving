// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, sum = 0;
    cin >> n;

    vector<int> vect(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vect[i];
        sum += vect[i];
    }
    long long sqr = sqrt(sum);

    if (sqr * sqr == sum)
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