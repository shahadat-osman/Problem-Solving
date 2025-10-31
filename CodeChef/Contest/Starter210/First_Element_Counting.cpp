// Shahadat Osman
// Date: 29-10-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "YES\n"
#define no() cout << "NO\n"
#define endl '\n'
#define nl << '\n'
#define sp << ' '

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
        vector<int> nums(n);
        set<int> mySet;
        for (auto &i : nums)
        {
            cin >> i;
            mySet.insert(i);
        }
        int mini = *mySet.begin();
        int maxi = *mySet.rbegin();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == mini || nums[i] == maxi)
                cout << -1 sp;

            else
            {
                int up = *mySet.upper_bound(nums[i]);
                int lw = *(--mySet.lower_bound(nums[i]));

                int count = ((nums[i] + up) / 2) - ((nums[i] + lw) / 2);
                cout << count sp;
            }
        }
        cout nl;
    }

    return 0;
}