// Shahadat Osman
//  Date: 07-10-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i, j, range;
    cin >> n >> range;
    vector<int> vct(n);
    for (int i = 0; i < n; i++)
        cin >> vct[i];

    if (n == 1)
    {
        cout << "0\n";
        return;
    }
    sort(vct.begin(), vct.end());

    int count = 1, max = INT_MIN;
    for (i = 1; i < n; i++)
    {
        if ((vct[i] - vct[i - 1]) <= range)
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 1;
        }
    }
    if (count > max)
        max = count;

    cout << n - max << "\n";
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