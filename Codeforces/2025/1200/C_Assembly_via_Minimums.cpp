// Shahadat Osman
// Date: 25-05-2025
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
        int m = (n * (n - 1)) / 2;
        vector<int> v(m);
        for (auto &i : v)
            cin >> i;

        sort(v.begin(), v.end());

        vector<int> ans(n);
        int j = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans[i] = v[j];
            j += (n - i - 1);
        }
        ans[n - 1] = ans[n - 2];

        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout nl;
    }

    return 0;
}