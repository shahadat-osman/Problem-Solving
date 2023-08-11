#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, i, j;
    cin >> n >> m;
    char table[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> table[i][j];
        }
    }
    int count = 1, max = 1;
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = 0; j < m - 1; j++)
        {
            if (table[i][j] == '#')
            {
                if (table[i][j] == '#' && table[i][j + 1] == '#')
                    count++;
                else if (table[i][j] == '#' && table[i][j + 1] == '.')
                {
                    if (count > max)
                    {
                        max = count;
                        count = 1;
                    }
                }
            }
            if (j == m - 2)
            {
                if (count > max)
                    max = count;
                count = 1;
            }
        }
    }
    cout << max << "\n";
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