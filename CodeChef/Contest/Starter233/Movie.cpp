// Shahadat Osman
// Date: 08-04-2026
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
        int n, m, a, b, c;
        cin >> n >> m >> a >> b >> c;
        int mini = min(n, m);
        int ans = mini * c;
        int left = abs(n - m);
        if (n > m)
            ans += (left * a);
        else
            ans += (left * b);

        cout << ans nl;
    }

    return 0;
}