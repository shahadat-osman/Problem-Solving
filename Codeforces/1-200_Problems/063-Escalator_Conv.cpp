#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, k, H, i, j, step_h;

    cin >> n >> m >> k >> H;
    vector<int> arr(n), diff, step_diff;
    for (i = 0; i < n; i++)
        cin >> arr[i];

    int abs_dif;
    for (i = 0; i < n; i++)
    {
        abs_dif = abs(H - arr[i]);

        diff.push_back(abs_dif);
    }
    int count = 0;
    for (i = 1; i <= m; i++)
    {
        step_diff.push_back(k * i);
    }
    for (i = 0; i < step_diff.size() - 1; i++)
    {
        for (j = i + 1; j < step_diff.size(); j++)
        {
            for (k = 0; k < n; k++)
            {
                int aa = abs(step_diff[i] - step_diff[j]);
                if (aa == diff[k])
                {
                    count++;
                    diff[k] = -1;
                }
            }
        }
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