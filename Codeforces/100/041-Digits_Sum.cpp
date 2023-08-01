#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, n, ans = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;

        ans = n / 10;
        if (n % 10 == 9)
            ans++;
        cout << ans << "\n";
    }

    return 0;
}