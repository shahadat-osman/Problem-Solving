// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int L, v1, v2;
    cin >> L >> v1 >> v2;

    int v1_need, v2_need, diff;
    if (L % v1 == 0)
        v1_need = L / v1;
    else
        v1_need = (L / v1) + 1;

    if (L % v2 == 0)
        v2_need = L / v2;
    else
        v2_need = (L / v2) + 1;

    if (v1_need <= v2_need)
    {
        cout << "-1\n";
        return;
    }
    else
    {
        diff = v1_need - v2_need - 1;
        cout << diff << "\n";
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