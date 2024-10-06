// Shahadat Osman
//  Date: 05-10-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, anims;
    cin >> n;
    if (n == 2)
        anims = 1;
    else
    {
        if (n % 4 == 0)
            anims = n / 4;
        else
            anims = (n / 4) + 1;
    }
    cout << anims << "\n";
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