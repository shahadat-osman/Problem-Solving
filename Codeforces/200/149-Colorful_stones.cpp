// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s, t;

    cin >> s >> t;

    int ln = t.size(), i, j, pos = 1;

    for (i = 0, j = 0; i < ln; i++)
    {
        if (t[i] == s[j])
        {
            j++;
            pos++;
        }
    }
    cout << pos << "\n";

    return 0;
}