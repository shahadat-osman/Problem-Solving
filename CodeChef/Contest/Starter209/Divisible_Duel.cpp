// Shahadat Osman
// Date: 22-10-2025
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
        int x, y;
        cin >> x >> y;

        ll odd = 0, even = 0;

        for (int i = x; i <= y; i++)
        {
            if (i % x == 0 && i % 2 == 0)
                even += i;
            else if (i % x == 0 && i % 2 != 0)
                odd += i;
        }
        if (even >= odd)
            yes();
        else
            no();
    }

    return 0;
}