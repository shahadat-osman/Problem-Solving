// Shahadat Osman
//  Date: 23-09-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int sz;
    cin >> sz;
    string s, name = "Timur";
    cin >> s;

    if (sz != 5)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (name[i] == s[j])
                {
                    count++;
                    break;
                }
            }
        }
        if (count == 5)
            cout << "YES\n";
        else
            cout << "NO\n";
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