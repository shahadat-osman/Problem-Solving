// Shahadat Osman
//  Date: 16-03-2025
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q, sum;
    cin >> n >> q;

    int arr[n], sum_arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        sum_arr[i] = sum;
    }

    sum_arr[0] = 0;
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int range_sum = sum_arr[r] - sum_arr[l - 1];
        int range_count = (r - l) + 1;
        int replace = range_count * k;
        int new_sum = (sum - range_sum) + replace;

        if (new_sum % 2 == 0)
            cout << "NO\n";
        else
            cout << "YES\n";
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
