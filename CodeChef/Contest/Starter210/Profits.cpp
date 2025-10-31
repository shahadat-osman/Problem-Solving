// Shahadat Osman
// Date: 29-10-2025
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
        int n, x;
        cin >> n >> x;
        ll p = n - x;
        if (p < 1)
            cout << 0 nl;
        else
        {
            ll ans = (p * (p + 1)) / 2;
            cout << ans nl;
        }
    }

    return 0;
}