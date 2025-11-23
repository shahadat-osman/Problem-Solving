// Shahadat Osman
// Date: 12-11-2025
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
        vector<int> vct(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> vct[i];

        int k = n;
        int ans = 0;
        while (k >= 1)
        {
            int l = 0, r = 0;
            for (int i = 1; i <= n; i++)
            {
                if (vct[i] == k)
                    break;
                else if (vct[i] > k)
                    continue;
                else
                    l++;
            }
            for (int i = n; i > 0; i--)
            {
                if (vct[i] == k)
                    break;
                else if (vct[i] > k)
                    continue;
                else
                    r++;
            }
            ans += min(l, r);
            k--;
        }
        cout << ans nl;
    }

    return 0;
}