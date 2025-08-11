// Shahadat Osman
// Date: 11-08-2025
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
        int n, s, m;
        cin >> n >> s >> m;
        vector<int> nums;
        nums.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            nums.push_back(l);
            nums.push_back(r);
        }
        nums.push_back(m);
        bool flg = false;
        for (int i = 1; i < nums.size(); i += 2)
        {
            if (nums[i] - nums[i - 1] >= s)
            {
                flg = true;
                break;
            }
        }
        if (flg)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}