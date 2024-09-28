// Shahadat Osman
// 681A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, a, b;
    string s;
    bool flag = false;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> s >> a >> b;
        if (a >= 2400 && b > a)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}