//  CS2023_STK


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, addy = 0, om = 0, om_max = 0, addy_max = 0;
    cin >> n;
    vector<int> add(n), omm(n);
    for (int i = 0; i < n; i++)
    {
        cin >> omm[i];
        if (omm[i] != 0)
        {
            om++;
            if (om > om_max)
                om_max = om;
        }
        else
        {
            om = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> add[i];
        if (add[i] != 0)
        {
            addy++;
            if (addy > addy_max)
                addy_max = addy;
        }
        else
        {
            addy = 0;
        }
    }
    if (addy_max > om_max)
        cout << "Addy\n";
    else if (om_max > addy_max)
        cout << "Om\n";
    else
        cout << "Draw\n";
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