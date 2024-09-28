#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int s, n, i, j;
    cin >> s >> n;

    vector<int> x(n), y(n);

    for (i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                swap(x[j], x[j + 1]);
                swap(y[j], y[j + 1]);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (s > x[i])
        {
            s += y[i];
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}