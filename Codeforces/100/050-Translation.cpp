#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string n1, n2;
    cin >> n1 >> n2;

    int i, j, flag = 1;
    for (i = 0, j = n2.size() - 1; i < n1.size(); i++, j--)
    {
        if (n1[i] != n2[j])
            flag = 0;
    }
    if (flag == 0)
        cout << "NO\n";
    else
        cout << "YES\n";

    return 0;
}