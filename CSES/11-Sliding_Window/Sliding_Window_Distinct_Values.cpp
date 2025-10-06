// Shahadat Osman
// Date: 03-10-2025
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

    int t = 1;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (auto &i : nums)
            cin >> i;

        map<int, int> mp;
        int l = 0, r = 0;

        while (r < n)
        {
            mp[nums[r]]++;
            if (r - l + 1 == k)
            {
                cout << mp.size() sp;
            }
            if (r - l + 1 > k)
            {
                mp[nums[l]]--;
                if (mp[nums[l]] == 0)
                    mp.erase(nums[l]);
                l++;
                if (r - l + 1 == k)
                {
                    cout << mp.size() sp;
                }
            }
            r++;
        }
    }

    return 0;
}