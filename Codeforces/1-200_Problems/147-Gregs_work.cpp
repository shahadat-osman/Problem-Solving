// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, chest = 0, bicep = 0, back = 0, a, flag = 1;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> a;
        if (flag == 1)
        {
            chest += a;
            flag = 2;
            continue;
        }
        if (flag == 2)
        {
            bicep += a;
            flag = 3;
            continue;
        }
        if (flag == 3)
        {
            back += a;
            flag = 1;
        }
    }
    if (chest > bicep && chest > back)
        cout << "chest\n";
    else if (bicep > chest && bicep > back)
        cout << "biceps\n";
    else
        cout << "back\n";

    return 0;
}