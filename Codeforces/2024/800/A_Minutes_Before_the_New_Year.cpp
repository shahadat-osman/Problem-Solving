// Shahadat Osman
//  Date: 09-10-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int h, m;
    cin >> h >> m;
    
    int hours = 23 - h;
    int mins = 60 - m;
    int result = (hours * 60) + mins;
    cout << result << "\n";
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