// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x1, x2, x3, mini, maxi;
    cin >> x1 >> x2 >> x3;

    mini = min({x1, x2, x3});
    maxi = max({x1, x2, x3});

    int ans = maxi - mini;

    cout << ans << "\n";

    return 0;
}