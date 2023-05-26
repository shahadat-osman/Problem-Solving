// EZSPEAK

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, count = 0, flag = 1;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count = 0;
        else
        {
            count++;
            if (count == 4)
                flag = 0;
        }
    }
    if (flag == 0)
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