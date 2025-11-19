// Shahadat Osman
// Date: 19-11-2025
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

        int maxx = 0, mini = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x / y > maxx)
            {
                maxx = x / y;
                mini = i;
            }
        }
        cout << mini nl;
    }

    return 0;
}