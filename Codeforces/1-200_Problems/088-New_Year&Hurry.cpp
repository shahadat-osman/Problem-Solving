#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k, i, j, times = 0;
    cin >> n >> k;

    k = 240 - k;
    for (i = n; i > 0; i--)
    {
        times = 5 * ((i * (i + 1)) / 2);
        if (times <= k)
        {
            cout << i << "\n";
            return 0;
        }
    }
    cout << "0\n";

    return 0;
}