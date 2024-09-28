// Shahadat Osman
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, flag = 0, once = 1;
    cin >> n;
    string s[n];
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
        
        if (flag == 0)
        {
            if (s[i][0] == 'O' && s[i][1] == 'O')
            {
                s[i][0] = '+';
                s[i][1] = '+';
                flag = 1;
                continue;
            }
            if (s[i][3] == 'O' && s[i][4] == 'O')
            {
                s[i][3] = '+';
                s[i][4] = '+';
                flag = 1;
            }
        }
    }
    if (flag == 0)
        cout << "NO\n";
    else
    {
        cout << "YES\n";

        for (i = 0; i < n; i++)
        {
            cout << s[i] << "\n";
        }
    }

    return 0;
}