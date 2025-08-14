// Shahadat Osman
// Date: 12-08-2025
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define yes() cout << "Yes\n"
#define no() cout << "No\n"
#define endl '\n'
#define nl << '\n'
vector<pair<int, int>> nums;
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
        return true;
 
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t = 1;
    while (t--)
    {
        nums.clear();
        int n;
        cin >> n;
 
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            nums.push_back({a, b});
        }
        sort(nums.begin(), nums.end(), comp);
 
        int param = -1, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i].first >= param)
            {
                ans++;
                param = nums[i].second;
            }
        }
        cout << ans nl;
    }
 
    return 0;
}
