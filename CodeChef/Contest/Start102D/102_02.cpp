// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, minimum_ins;
    cin >> x;
    float cmsn_get = x * 0.2;

    minimum_ins = 100 / cmsn_get;

    if (minimum_ins * cmsn_get != 100)
        minimum_ins++;

    cout << minimum_ins << "\n";
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