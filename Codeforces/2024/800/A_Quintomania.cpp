// Shahadat Osman
//  Date: 02-11-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vct(n);
    for (int i = 0; i < n; i++)
        cin >> vct[i];

    int flag = true;
    for (int i = 0; i < vct.size() - 1; i++)
    {
        int diff = abs(vct[i] - vct[i + 1]);
        if (diff != 5 && diff != 7)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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
