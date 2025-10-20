// Shahadat Osman
// Date: 16-10-2025
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
        int ans = 0, start = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            ans = max(ans, abs(a - start));
            start = a;
        }
        ans = max(ans, (abs(start - x) * 2));
        cout << ans nl;
    }

    return 0;
}