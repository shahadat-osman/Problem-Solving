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
        int n;
        cin >> n;
        vector<int> a1(n), b1(n);
        for (auto &i : a1)
            cin >> i;
        for (auto &i : b1)
            cin >> i;
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (a1[i] > b1[i])
                ans += (a1[i] - b1[i]);
        }
        cout << ans nl;
    }

    return 0;
}