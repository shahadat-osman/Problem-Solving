// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string cards;
    cin >> cards;

    if ((cards[0] == 'a' && cards[1] == 'b') || (cards[0] == 'b' && cards[1] == 'a') || (cards[0] == 'a' && cards[2] == 'b') || (cards[0] == 'c' && cards[2] == 'a'))
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