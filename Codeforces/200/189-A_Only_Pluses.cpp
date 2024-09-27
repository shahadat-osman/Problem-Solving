// Shahadat Osman
//  Date: 26-09-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < 5; i++)
    {
        int minn = min(a, min(b, c));
        if (a == minn)
            a++;
        else if (b == minn)
            b++;
        else if (c == minn)
            c++;
    }
    cout << a * b * c << "\n";
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