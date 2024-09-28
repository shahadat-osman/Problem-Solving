// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, i, j, x, a;

    cin >> n >> m;

    int arr[m + 1];

    for (i = 1; i <= m; i++)
        arr[i] = 0;

    while (n--)
    {
        cin >> x;
        while (x--)
        {
            cin >> a;
            arr[a] = 1;
        }
    }

    int flag = 1;
    for (i = 1; i <= m; i++)
    {
        if (arr[i] == 0)
            flag = 0;
    }

    if (flag == 0)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}