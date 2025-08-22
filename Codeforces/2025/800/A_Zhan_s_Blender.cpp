// Shahadat Osman
// Date: 21-08-2025
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define yes() cout << "Yes\n"
#define no() cout << "No\n"
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
        int n, x, y;
        cin >> n >> x >> y;
        int ans1, ans2;
        if (n % y == 0)
        {
            ans1 = n / y;
        }
        else if (n % y != 0)
        {
            ans1 = n / y;
            ans1++;
        }
        if (n % x == 0)
            ans2 = n / x;

        else if (n % x != 0)
        {
            ans2 = n / x;
            ans2++;
        }
        cout << max(ans1, ans2) nl;
    }

    return 0;
}