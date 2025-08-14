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
 
    int t = 1;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        multiset<ll> nums;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            nums.insert(x);
        }
        vector<ll> price(m);
        for (int i = 0; i < m; i++)
        {
            cin >> price[i];
        }
        for (int i = 0; i < m; i++)
        {
            if (nums.size() == 0)
                cout << -1 nl;
            else
            {
                auto it = nums.upper_bound(price[i]);
                if (it == nums.begin())
                    cout << -1 nl;
                else
                {
                    cout << *(--it)nl;
                    nums.erase(it);
                }
            }
        }
    }
 
    return 0;
}