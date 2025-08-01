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
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        if (even.size() == 0 || odd.size() == 0)
        {
            cout << 0 nl;
            continue;
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());

        ll ans = even.size(), odd_max = odd.back();
        for (int i = 0; i < even.size(); i++)
        {
            if (even[i] > odd_max)
            {
                ans++;
                break;
            }
            odd_max += even[i];
        }
        cout << ans nl;
    }

    return 0;
}