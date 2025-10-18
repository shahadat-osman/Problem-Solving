// Shahadat Osman
// Date: 17-10-2025
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
        for (auto &i : nums)
            cin >> i;
        sort(nums.begin(), nums.end());
        cout << *nums.rbegin() nl;
    }

    return 0;
}