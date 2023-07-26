#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, flag = 1;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
            flag = 0;
    }
    if (flag == 0)
        cout << "HARD\n";
    else
        cout << "EASY\n";

    return 0;
}