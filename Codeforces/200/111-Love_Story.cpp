// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, cf = "codeforces";
    int count = 0;

    cin >> s;

    for (int i = 0; i < 10; i++)
    {
        if (s[i] != cf[i])
            count++;
    }
    cout << count << "\n";
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