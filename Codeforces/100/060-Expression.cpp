#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, ans = 0;
    cin >> a >> b >> c;
    if (a == 1 || b == 1 || c == 1)
    {
        if (a == 1)
            ans = (a + b) * c;

        if (b == 1)
        {
            if (a >= c)
                ans = a * (b + c);
            if (a < c)
                ans = (a + b) * c;
        }
        if (c == 1)
            ans = a * (b + c);

        if (a == 1 && c == 1)
            ans = a + b + c;
    }
    else
        ans = a * b * c;

    cout << ans << "\n";

    return 0;
}