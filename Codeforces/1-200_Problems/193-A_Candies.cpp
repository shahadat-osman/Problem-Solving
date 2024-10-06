// Shahadat Osman
//  Date: 30-09-2024
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int k = 2;
    while (true)
    {
        int p = (pow(2, k) - 1);
        if (n % p == 0)
        {
            cout << n / p << "\n";
            break;
        }
        k++;
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