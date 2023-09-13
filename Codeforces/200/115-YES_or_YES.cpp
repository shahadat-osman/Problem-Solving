// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    if (s[0] == 'y' || s[0] == 'Y')
    {
        if (s[1] == 'e' || s[1] == 'E')
        {
            if (s[2] == 'S' || s[2] == 's')
            {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
    return;
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