// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, len, FS = 0, SF = 0;
    string s;

    cin >> n >> s;

    len = s.size();

    for (i = 0; i < len - 1; i++)
    {
        if (s[i] == 'F' && s[i + 1] == 'S')
            FS++;

        if (s[i] == 'S' && s[i + 1] == 'F')
            SF++;
    }

    if (SF > FS)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}