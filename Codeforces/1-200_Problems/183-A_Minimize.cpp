// Shahadat Osman
//  Date: 21-09-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int min = INT_MAX;
    for (int i = a; i <= b; i++)
    {
        int x = ((i - a) + (b - i));
        if (x < min)
            min = x;
    }

    cout << min << "\n";
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