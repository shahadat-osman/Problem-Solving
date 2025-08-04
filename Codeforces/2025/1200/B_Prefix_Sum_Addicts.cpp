// Shahadat Osman
// Date: 03-08-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "Yes\n"
#define no() cout << "No\n"
#define endl '\n'
#define nl << '\n'

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> prefix_sum(n + 1, 0);
        for (int i = n - k + 1; i <= n; i++)
        {
            cin >> prefix_sum[i];
        }

        if (n == 1 || k == 1)
        {
            cout << "Yes\n";
            continue;
        }

        vector<ll> nums(n + 1, 0);
        bool flg = true;
        for (int i = n; i > n - k + 1; i--)
        {
            nums[i] = prefix_sum[i] - prefix_sum[i - 1];
            if (i < n)
            {
                if (nums[i] > nums[i + 1])
                {
                    flg = false;
                    break;
                }
            }
        }

        if (flg == false)
        {
            cout << "No\n";
            continue;
        }

        for (int i = n - k + 1; i > 1; i--)
        {
            nums[i] = nums[i + 1];
        }

        // if (n - k > 0)
        for (int i = n - k; i > 0; i--)
        {
            prefix_sum[i] = prefix_sum[i + 1] - nums[i + 1];
        }

        nums[1] = prefix_sum[1];

        flg = true;
        for (int i = 1; i <= n - k + 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                flg = false;
                break;
            }
        }

        if (flg)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}