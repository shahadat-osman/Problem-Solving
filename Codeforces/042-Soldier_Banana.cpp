#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, n, w, cost = 0, ans;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        cost += k * i;
    }

    if (cost > n)
        ans = cost - n;
    else
        ans = 0;

    cout << ans << "\n";

    return 0;
}