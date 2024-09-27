// Shahadat Osman
//  Date: 17-03-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long row, colm, ans;
    cin >> row >> colm;

    if (row > colm)
    {
        if (row % 2 == 0)
            ans = (row * row) - (colm - 1);
        else
            ans = ((row - 1) * (row - 1)) + colm;
    }
    else
    {
        if (colm % 2 == 0)
            ans = ((colm - 1) * (colm - 1)) + row;
        else
            ans = (colm * colm) - (row - 1);
    }

    cout << ans << "\n";
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