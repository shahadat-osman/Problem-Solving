// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        cout << "YES\n";
        return;
    }
    else if (n % 2 != 0)
    {
        if (n % k == 0)
        {
            cout << "YES\n";
            return;
        }
        else if (n % k != 0)
        {
            if ((n - k) % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
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