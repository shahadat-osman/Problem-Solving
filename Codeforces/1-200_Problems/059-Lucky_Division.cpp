#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num, flag = 0, n[] = {4, 7, 47, 74, 477, 747};
    cin >> num;

    for (int i = 0; i < 6; i++)
    {
        if (num % n[i] == 0)
            flag = 1;
    }
    if (flag == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}