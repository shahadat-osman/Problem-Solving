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
        int w, p, k;
        cin >> w >> p >> k;

        int ans;
        if (w >= k)
            ans = (k * 2);
        else
        {
            ans = (w * 2) + (k - w);
        }
        cout << ans nl;
    }

    return 0;
}