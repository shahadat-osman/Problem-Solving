// Shahadat Osman
// Date: 18-10-2025
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

    int t = 1;
    while (t--)
    {
        int s, a, b, x;
        cin >> s >> a >> b >> x;
        int ans = 0;
        while (x > 0)
        {
            if (x >= a)
                ans += (s * a);
            else
                ans += (s * x);
            x -= (a + b);
        }
        cout << ans nl;
    }

    return 0;
}