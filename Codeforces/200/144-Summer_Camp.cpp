// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, half, even, ans, greater_100;

    cin >> n;

    if (n < 10)
        ans = n;

    if (n == 1000)
        ans = 3;

    if (n > 9 && n < 190)
    {
        half = (n - 9) / 2;
        if (n % 2 != 0)
        {
            half += 9;
            ans = half % 10;
        }
        if (n % 2 == 0)
        {
            half += 10;
            ans = half / 10;
        }
    }

    if (n > 189 && n < 1000)
    {
        half = n - 189;
        if (half % 3 == 1)
        {
            greater_100 = 100 + (half / 3);
            ans = greater_100 / 100;
        }
        if (half % 3 == 2)
        {
            greater_100 = 100 + (half / 3);
            ans = greater_100 / 10;
            ans %= 10;
        }
        if (half % 3 == 0)
        {
            greater_100 = 99 + (half / 3);
            ans = greater_100 % 10;
        }
    }
    cout << ans << "\n";

    return 0;
}