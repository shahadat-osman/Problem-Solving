// Shahadat Osman

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, i, j;
    cin >> n >> m;

    string str = "vika";

    vector<vector<char>> vect(n, vector<char>(m));

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> vect[i][j];

    if (m < 4)
    {
        cout << "NO\n";
        return;
    }
    int k = 0;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (vect[j][i] == str[k])
            {
                k++;
                break;
            }
        }
    }
    if (k == 4)
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