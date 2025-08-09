// Shahadat Osman
// Date: 07-08-2025
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
        int x, y;
        cin >> x >> y;

        int y_need = (y + 2 - 1) / 2;

        int x_available = 15 * y_need - 4 * y;
        if (x <= x_available)
            cout << y_need nl;
        else
        {
            int x_remains = x - x_available;
            int x_need = (x_remains + 15 - 1) / 15;
            y_need += x_need;
            cout << y_need nl;
        }
    }

    return 0;
}