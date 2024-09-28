// Shahadat Osman
//  Date: 21-09-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, j;
    cin >> n;

    char arr[n+1][5];

    for (i = 1; i <= n; i++)
        for (j = 1; j <= 4; j++)
            cin >> arr[i][j];

    for (i = n; i > 0; i--)
    {
        for (j = 1; j <= 4; j++)
        {
            if (arr[i][j] == '#')
                cout << j << " ";
        }
    }
    cout << "\n";
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