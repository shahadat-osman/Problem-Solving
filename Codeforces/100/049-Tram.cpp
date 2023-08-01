#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b, t = 0;
    cin >> n;

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        t += (b - a);
        if (t > max)
            max = t;
    }
    cout << max << "\n";

    return 0;
}