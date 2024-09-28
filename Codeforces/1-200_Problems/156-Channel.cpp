// Shahadat Osman
// 1863A
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, q, i, online = 0, opt, len, flag = 0;
    string str;

    cin >> n >> a >> q;
    cin >> str;

    if (n == a)
    {
        cout << "YES\n";
        return;
    }

    opt = a;
    len = str.size();
    for (i = 0; i < len; i++)
    {
        if (str[i] == '+')
        {
            online++;
            a++;
            if (a == n)
                flag = 1;
        }
        if (str[i] == '-')
        {
            a--;
        }
    }

    if (a >= n)
        cout << "YES\n";

    else if (a < n && flag == 1)
    {
        cout << "YES\n";
    }
    else if (a < n && online + opt >= n)
    {
        cout << "MAYBE\n";
    }
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