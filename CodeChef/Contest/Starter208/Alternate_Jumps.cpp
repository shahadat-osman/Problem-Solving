// Shahadat Osman
// Date: 15-10-2025
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
        int ans = n;
        bool left = 1;
        while (n--)
        {
            if (left)
            {
                ans -= n;
                left = 0;
            }
            else if (!left)
            {
                ans += n;
                left = 1;
            }
        }
        cout << ans nl;
    }

    return 0;
}