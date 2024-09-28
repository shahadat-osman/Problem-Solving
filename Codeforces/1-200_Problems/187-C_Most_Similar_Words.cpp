// Shahadat Osman
//  Date: 23-09-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int min = INT_MAX;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            count = 0;
            for (int k = 0; k < m; k++)
            {
                count += abs(s[i][k] - s[j][k]);
            }
            if (count < min)
                min = count;
        }
    }
    cout << min << "\n";
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