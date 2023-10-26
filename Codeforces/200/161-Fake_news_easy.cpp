// Shahadat Osman
// 802G
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s, given = "heidi";

    cin >> s;

    int len = s.size(), i, j = 0, count = 0;

    for (i = 0; i < len; i++)
    {
        if (s[i] == given[j])
        {
            j++;
            count++;
        }
    }

    if (count == 5)
        cout << "YES\n";

    else
        cout << "NO\n";

    return 0;
}