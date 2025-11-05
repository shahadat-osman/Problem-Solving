// Shahadat Osman
// Date: 03-11-2025
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
        vector<int> vct(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vct[i];
        }

        vector<int> ans;
        ans.push_back(vct[0]);

        for (int i = 1; i < n; i++)
        {
            if (vct[i] >= vct[i - 1])
                ans.push_back(vct[i]);
            else
            {

                ans.push_back(vct[i]);
                ans.push_back(vct[i]);
            }
        }

        cout << ans.size() nl;
        for (auto v : ans)
            cout << v sp;
        cout nl;
    }

    return 0;
}