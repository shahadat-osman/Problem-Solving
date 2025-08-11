// Shahadat Osman
// Date: 10-08-2025
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
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        int cnt = 1;
        vector<int> valid;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
                cnt++;
            else if (nums[i] != nums[i + 1])
            {
                if (cnt >= k)
                    valid.push_back(nums[i]);
                cnt = 1;
            }
        }
        if (cnt >= k)
            valid.push_back(nums[n - 1]);

        if (valid.empty())
        {
            cout << -1 nl;
            continue;
        }
        if (valid.size() == 1)
        {
            cout << valid[0] << " " << valid[0] nl;
            continue;
        }

        int l = valid[0], r = valid[0], maxx = 1, frq = 1, p = 0, q = 0;
        while (q < valid.size() - 1)
        {
            if (valid[q] + 1 == valid[q + 1])
            {
                frq++;
                q++;
            }
            else
            {
                if (frq > maxx)
                {
                    l = valid[p];
                    r = valid[q];
                    maxx = frq;
                }
                frq = 1, p = q + 1, q = q + 1;
            }
        }
        if (frq > maxx)
        {
            l = valid[p];
            r = valid[q];
            maxx = frq;
        }
        cout << l << " " << r nl;
    }

    return 0;
}