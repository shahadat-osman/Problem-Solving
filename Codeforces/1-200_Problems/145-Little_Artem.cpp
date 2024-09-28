// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, ans;
    cin >> n;
    if (n % 3 == 0)
    {
        ans = (n / 3) * 2;
    }
    else
    {
        ans = ((n / 3) * 2) + 1;
    }

    cout << ans << "\n";

    return 0;
}