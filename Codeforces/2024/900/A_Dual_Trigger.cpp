// Shahadat Osman
//  Date: 08-10-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            count++;
            if (i == n - 1)
                continue;
            if (s[i + 1] == '1')
                flag = true;
        }
    }
    if (n == 1 && count == 0)
        cout << "YES\n";
    else if (n < 2 || count % 2 != 0 || (count == 2 && flag))
        cout << "NO\n";

    else
        cout << "YES\n";
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