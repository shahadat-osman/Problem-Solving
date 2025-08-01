// Shahadat Osman
// Date: 31-07-2025
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
        int n;
        cin >> n;

        int v = n * n;
        // cout << v nl;

        vector<int> nums;
        while (v)
        {
            nums.push_back(v--);
        }
        // for (auto val : nums)
        //     cout << val << " ";
        // cout nl;

        vector<vector<int>> arr(n, vector<int>(n));
        int p = 0, q = nums.size() - 1;
        bool l = true, r = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (l)
                {
                    arr[i][j] = nums[p++];
                    l = false;
                    r = true;
                }
                else if (r)
                {
                    arr[i][j] = nums[q--];
                    r = false;
                    l = true;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
                reverse(arr[i].begin(), arr[i].end());
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout nl;
        }
    }

    return 0;
}