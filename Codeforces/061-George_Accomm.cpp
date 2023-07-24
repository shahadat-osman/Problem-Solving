#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, p, q, count = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> p >> q;
        if ((q - p) >= 2)
            count++;
    }
    cout << count << "\n";

    return 0;
}