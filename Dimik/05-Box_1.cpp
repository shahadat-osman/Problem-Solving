#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        if (t == 0)
            continue;
        cout << "\n";
    }

    return 0;
}