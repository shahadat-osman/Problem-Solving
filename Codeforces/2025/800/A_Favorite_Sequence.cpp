// Shahadat Osman
// Date: 27-05-2025
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

        vector<int> a(n);
        for (auto &i : a)
            cin >> i;

        vector<int> ans;

        int l = 0, r = n - 1;

        while (l < r)
        {
            ans.push_back(a[l]);
            ans.push_back(a[r]);
            l++, r--;
        }
        if (n % 2 != 0)
        {
            ans.push_back(a[l]);
        }
        for (auto val : ans)
            cout << val << " ";
        cout nl;
    }

    return 0;
}