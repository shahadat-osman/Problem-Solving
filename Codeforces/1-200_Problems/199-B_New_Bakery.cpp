// Shahadat Osman
//  Date: 06-10-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long bun, a_price, b_price, profit, n, a;
    cin >> bun >> a_price >> b_price;

    if (b_price < a_price)
        profit = a_price * bun;
    else
    {
        n = b_price - a_price;

        if (n > bun)
        {
            n = bun;
            a = b_price - (n - 1);

            profit = (n * ((2 * a) + (n - 1))) / 2;
        }
        else
        {
            a = b_price - (n - 1);
            profit = (n * ((2 * a) + (n - 1))) / 2;
            profit += ((bun - n) * a_price);
        }
    }
    cout << profit << "\n";
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