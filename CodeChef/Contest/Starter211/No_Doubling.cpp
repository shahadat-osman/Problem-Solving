// Shahadat Osman
// Date: 05-11-2025
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
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        vector<int> ans;
        sort(v.begin(), v.end(), greater<int>());
        int l = 0, r = n - 1;
        while (l < r)
        {
            ans.push_back(v[r]);
            ans.push_back(v[l]);
            r--, l++;
        }
        if (n % 2 != 0)
            ans.push_back(v[l]);
        for (auto val : ans)
            cout << val sp;
        cout nl;
    }

    return 0;
}