// Shahadat Osman
//  Date: 01-10-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (n == 1)
        cout << a << "\n";
    else if (n % 2 == 0)
    {
        int h = n / 2;
        if ((h * b) < (n * a))
            cout << h * b << "\n";
        else
            cout << n * a << "\n";
    }
    else if (n % 2 != 0)
    {
        int h = n / 2;
        if (((h * b) + a) < (n * a))
            cout << ((h * b) + a) << "\n";
        else
            cout << n * a << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}