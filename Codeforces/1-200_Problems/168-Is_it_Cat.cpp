// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, len, j = 0, count = 0;
    string s, m = "meow";
    cin >> n >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 92)
            s[i] += 32;

        if (s[i] == m[j])
        {
            count++;
            j++;
        }
        if (s[i] == m[j - 1])
            continue;

        else
        {
            cout << "NO\n";
            return;
        }
    }

    if (count == 4)
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